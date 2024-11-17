#include "SQLiteDBManager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QThread>

SQLiteDBManager::SQLiteDBManager(const QString &databasePath) : databasePath(databasePath) {}

SQLiteDBManager::~SQLiteDBManager() {
    closeDataBase();
}

bool SQLiteDBManager::connectToDataBase() {
    if (db.isOpen()) {
        qDebug() << "Database is already open.";
        return true;
    }

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(databasePath);

    int retryCount = 0;
    const int maxRetries = 3;

    while (retryCount < maxRetries && !db.open()) {
        qDebug() << "Error connecting to database, attempt #" << (retryCount + 1) << ":" << db.lastError().text();
        retryCount++;
        QThread::sleep(1); // Додаємо затримку між спробами
    }

    if (!db.isOpen()) {
        qDebug() << "Failed to connect to database after " << retryCount << " attempts.";
        return false;
    }

    qDebug() << "Database connected successfully!";
    return true;
}



void SQLiteDBManager::closeDataBase() {
    if (db.isOpen()) {
        db.close();
    }
}

QSqlDatabase SQLiteDBManager::getDB() const {
    return db;
}

bool SQLiteDBManager::createTables() {
    QString createTableQuery = R"(
        CREATE TABLE IF NOT EXISTS Cars (
            name TEXT PRIMARY KEY,
            bodyType TEXT,
            carType TEXT,
            engineVolume REAL,
            horsepower INTEGER,
            fuelType TEXT,
            fuelConsumption REAL,
            color TEXT,
            rentalPrice REAL,
            isAvailable INTEGER,
            photo BLOB
        )
    )";

    QSqlQuery query(db);
    if (!query.exec(createTableQuery)) {
        qDebug() << "Failed to create Cars table:" << query.lastError().text();
        return false;
    }
    qDebug() << "Cars table created successfully";
    return true;
}

bool SQLiteDBManager::addCar(const QString &name, const QString &bodyType, const QString &carType,
                             double engineVolume, int horsepower, const QString &fuelType,
                             double fuelConsumption, const QString &color, double rentalPrice, bool isAvailable, const QByteArray &photo)
{
    qDebug() << "Inserting photo with size:" << photo.size();  // Перевірка розміру фото

    QSqlQuery query;
    query.prepare(R"(
        INSERT INTO Cars (name, bodyType, carType, engineVolume, horsepower, fuelType, fuelConsumption, color, rentalPrice, isAvailable, photo)
        VALUES (:name, :bodyType, :carType, :engineVolume, :horsepower, :fuelType, :fuelConsumption, :color, :rentalPrice, :isAvailable, :photo)
    )");

    query.bindValue(":name", name);
    query.bindValue(":bodyType", bodyType);
    query.bindValue(":carType", carType);
    query.bindValue(":engineVolume", engineVolume);
    query.bindValue(":horsepower", horsepower);
    query.bindValue(":fuelType", fuelType);
    query.bindValue(":fuelConsumption", fuelConsumption);
    query.bindValue(":color", color);
    query.bindValue(":rentalPrice", rentalPrice);
    query.bindValue(":isAvailable", isAvailable);
    query.bindValue(":photo", photo);

    if (!query.exec()) {
        qWarning() << "Failed to insert car data:" << query.lastError().text();
        return false;
    }

    qDebug() << "Car added successfully";
    return true;
}




bool SQLiteDBManager::removeCar(const QString &carName)
{
    QSqlQuery query;

    // Видаляємо автомобіль за ім'ям
    query.prepare("DELETE FROM Cars WHERE name = :car_name");
    query.bindValue(":car_name", carName);
    if (!query.exec()) {
        qWarning() << "Failed to delete car:" << query.lastError().text();
        return false;
    }

    qDebug() << "Car deleted successfully";
    return true;
}

