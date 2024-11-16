#ifndef SQLITE_DB_MANAGER_H
#define SQLITE_DB_MANAGER_H

#include <QSqlDatabase>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QByteArray>

class SQLiteDBManager {
public:
    explicit SQLiteDBManager(const QString &databasePath = "autopark.db");
    ~SQLiteDBManager();

    // Базові операції з базою даних
    bool connectToDataBase();
    void closeDataBase();
    QSqlDatabase getDB() const;

    // Робота з таблицями
    bool createTables();
    bool addCar(const QString &name, const QString &bodyType, const QString &carType,
                double engineVolume, int horsepower, const QString &fuelType,
                double fuelConsumption, const QString &color, double rentalPrice,
                bool isAvailable = true, const QByteArray &photo = QByteArray());
    bool removeCar(const QString &carName);

private:
    QSqlDatabase db;
    QString databasePath;

    void logErrorToFile(const QString &message);
};

#endif // SQLITE_DB_MANAGER_H
