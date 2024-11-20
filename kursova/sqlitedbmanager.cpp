#include "sqlitedbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QThread>

SQLiteDBManager* SQLiteDBManager::instance = nullptr;

// Метод для отримання екземпляру даного класу (патерн Singleton)
SQLiteDBManager* SQLiteDBManager::getInstance() {
    if (SQLiteDBManager::instance == nullptr) {
        SQLiteDBManager::instance = new SQLiteDBManager("db.sqlite");
    }
    return instance;
}

SQLiteDBManager::SQLiteDBManager(const QString databasePath) : databasePath(databasePath) {}

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

QSqlDatabase &SQLiteDBManager::getDB() {
    return db;
}

bool SQLiteDBManager::createTables() {
    // Створення таблиці для автомобілів
    QString createCarsTableQuery = R"(
        CREATE TABLE IF NOT EXISTS Cars (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            name TEXT UNIQUE,
            bodyType TEXT,
            carType TEXT,
            engineVolume REAL,
            horsepower INTEGER,
            fuelType TEXT,
            fuelConsumption REAL,
            color TEXT,
            rentalPrice REAL,
            isAvailable TEXT
        )
    )";

    QSqlQuery query(db);
    if (!query.exec(createCarsTableQuery)) {
        qDebug() << "Failed to create Cars table:" << query.lastError().text();
        return false;
    }

    // Створення таблиці для клієнтів
    QString createClientsTableQuery = R"(
        CREATE TABLE IF NOT EXISTS Clients (
            phoneNumber TEXT PRIMARY KEY,
            email TEXT,
            firstName TEXT,
            surname TEXT,
            middleName TEXT,
            rentedCarName TEXT,
            FOREIGN KEY (rentedCarName) REFERENCES Cars(name)
        )
    )";

    if (!query.exec(createClientsTableQuery)) {
        qDebug() << "Failed to create Clients table:" << query.lastError().text();
        return false;
    }

    qDebug() << "Tables created successfully";
    return true;
}

bool SQLiteDBManager::addCar(const QString &name, const QString &bodyType, const QString &carType,
                             double engineVolume, int horsepower, const QString &fuelType,
                             double fuelConsumption, const QString &color, double rentalPrice, const QString &isAvailable)
{
    if (name.isEmpty() || bodyType == "вибрати" || carType == "вибрати" || fuelType == "вибрати" || color.isEmpty()) {
        qWarning() << "Invalid car data provided.";
        return false;
    }

    QSqlQuery query;
    query.prepare(R"(
        INSERT INTO Cars (name, bodyType, carType, engineVolume, horsepower, fuelType, fuelConsumption, color, rentalPrice, isAvailable)
        VALUES (:name, :bodyType, :carType, :engineVolume, :horsepower, :fuelType, :fuelConsumption, :color, :rentalPrice, :isAvailable)
    )");

    query.bindValue(":name", name);  // Приклад: "1"
    query.bindValue(":bodyType", bodyType);  // Приклад: "Універсал"
    query.bindValue(":carType", carType);  // Приклад: "Економ клас"
    query.bindValue(":engineVolume", engineVolume);  // Приклад: 1 (REAL)
    query.bindValue(":horsepower", horsepower);  // Приклад: 1 (INTEGER)
    query.bindValue(":fuelType", fuelType);  // Приклад: "Дизель"
    query.bindValue(":fuelConsumption", fuelConsumption);  // Приклад: 1 (REAL)
    query.bindValue(":color", color);  // Приклад: "blue"
    query.bindValue(":rentalPrice", rentalPrice);  // Приклад: 1 (REAL)
    query.bindValue(":isAvailable", isAvailable);

    qDebug() << "Inserting car with values:"
             << name << bodyType << carType << engineVolume
             << horsepower << fuelType << fuelConsumption
             << color << rentalPrice << isAvailable;

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

    query.prepare("DELETE FROM Cars WHERE name = :car_name");
    query.bindValue(":car_name", carName);
    if (!query.exec()) {
        qWarning() << "Failed to delete car:" << query.lastError().text();
        return false;
    }

    qDebug() << "Car deleted successfully";
    return true;
}

bool SQLiteDBManager::dropTable(const QString &tableName) {
    QSqlQuery query(db);
    QString dropTableQuery = QString("DROP TABLE IF EXISTS %1").arg(tableName);

    if (!query.exec(dropTableQuery)) {
        qWarning() << "Failed to drop table:" << tableName
                   << query.lastError().text();
        return false;
    }

    qDebug() << "Table" << tableName << "dropped successfully!";
    return true;
}

bool SQLiteDBManager::addClient(const QString &phoneNumber, const QString &email, const QString &firstName,
                                const QString &surname, const QString &middleName, const QString &rentedCarName) {
    if (phoneNumber.isEmpty() || email.isEmpty() || firstName.isEmpty() || surname.isEmpty() || rentedCarName.isEmpty()) {
        qWarning() << "Invalid client data provided.";
        return false;
    }

    QSqlQuery query;
    query.prepare(R"(
        INSERT INTO Clients (phoneNumber, email, firstName, surname, middleName, rentedCarName)
        VALUES (:phoneNumber, :email, :firstName, :surname, :middleName, :rentedCarName)
    )");

    query.bindValue(":phoneNumber", phoneNumber);
    query.bindValue(":email", email);
    query.bindValue(":firstName", firstName);
    query.bindValue(":surname", surname);
    query.bindValue(":middleName", middleName);
    query.bindValue(":rentedCarName", rentedCarName);

    if (!query.exec()) {
        qWarning() << "Failed to insert client data:" << query.lastError().text();
        return false;
    }

    // Оновлюємо статус доступності автомобіля
    return updateCarAvailability(rentedCarName, "Недоступний");
}

bool SQLiteDBManager::updateCarAvailability(const QString &rentedCarName, const QString &availability) {
    QSqlQuery query;
    query.prepare("UPDATE Cars SET isAvailable = :availability WHERE id = :id"); //дороби
    query.bindValue(":carName", ca); // дороби
    query.bindValue(":availability", availability);

    if (!query.exec()) {
        qWarning() << "Failed to update car availability:" << query.lastError().text();
        return false;
    }

    qDebug() << "Car availability updated successfully";
    return true;
}

