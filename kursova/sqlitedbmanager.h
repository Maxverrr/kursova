#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H
#include <QSqlDatabase>
#include <QString>

class SQLiteDBManager {
public:
    ~SQLiteDBManager();

    // Метод для отримання екземпляру даного класу (патерн Singleton)
    static SQLiteDBManager* getInstance();

    bool connectToDataBase();
    void closeDataBase();
    QSqlDatabase& getDB();

    bool createTables();
    bool addCar(const QString &name, const QString &bodyType, const QString &carType,
                double engineVolume, int horsepower, const QString &fuelType,
                double fuelConsumption, const QString &color, double rentalPrice, const QString &isAvailable);
    bool removeCar(const QString &carName);
    bool dropTable(const QString &tableName);

    bool addClient(const QString &phoneNumber, const QString &email, const QString &firstName,
                   const QString &surname, const QString &middleName, const QString &rentedCarName);

    bool updateCarAvailability(const QString &carName, const QString& availability);


private:
    static SQLiteDBManager* instance;
    QSqlDatabase db;
    QString databasePath;
    explicit SQLiteDBManager(const QString databasePath = "");
};

#endif // SQLITEDBMANAGER_H
