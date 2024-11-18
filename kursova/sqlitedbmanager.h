#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QSqlDatabase>
#include <QString>
#include <QSqlQuery>

class SQLiteDBManager
{
public:
    explicit SQLiteDBManager(const QString &databasePath = "cars.db");
    ~SQLiteDBManager();

    bool connectToDataBase();
    void closeDataBase();
    QSqlDatabase getDB() const;
    bool createTables();
    bool addCar(const QString &name, const QString &bodyType, const QString &carType,
                double engineVolume, int horsepower, const QString &fuelType,
                double fuelConsumption, const QString &color, double rentalPrice, const QString &isAvailable);
    bool removeCar(const QString &carName);
    bool dropTable(const QString &tableName);
private:
    QString databasePath;
    QSqlDatabase db;
};

#endif // SQLITEDBMANAGER_H
