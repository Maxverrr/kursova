#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include "SQLiteDBManager.h"

// Функція для перевірки драйвера SQLite
void checkSQLiteDriver() {
    QStringList drivers = QSqlDatabase::drivers();
    if (drivers.contains("QSQLITE")) {
        qDebug() << "SQLite driver is available.";
    } else {
        qDebug() << "SQLite driver is NOT available.";
    }
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Перевірка доступності драйвера
    checkSQLiteDriver();

    // Ваш код для роботи з базою даних
    SQLiteDBManager dbManager;
    dbManager.connectToDataBase();

    MainWindow w;
    w.show();
    return a.exec();
}
