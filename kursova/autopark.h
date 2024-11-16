#ifndef AUTOPARK_H
#define AUTOPARK_H

#include <QDialog>
#include "sqlitedbmanager.h"

namespace Ui {
class Autopark;
}

class Autopark : public QDialog
{
    Q_OBJECT

public:
    explicit Autopark(QWidget *parent = nullptr);
    ~Autopark();

private slots:

    void on_pbAddCar_clicked();
    void on_pbDeleteCar_clicked();
    void on_pbSUV_clicked();
    void loadCars();

private:
    Ui::Autopark *ui;
    SQLiteDBManager *dbManager;
};

#endif // AUTOPARK_H
