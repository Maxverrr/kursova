#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QSqlDatabase>
#include <QString>

class SQLiteDBManager {
public:
    explicit SQLiteDBManager(const QString &databasePath = "");
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

    // Додаємо оголошення методу addClient
    bool addClient(const QString &phoneNumber, const QString &email, const QString &firstName,
                   const QString &surname, const QString &middleName, const QString &rentedCarName);

    bool updateCarAvailability(const QString& carName, const QString& availability);


private:
    QSqlDatabase db;
    QString databasePath;
};

#endif // SQLITEDBMANAGER_H
