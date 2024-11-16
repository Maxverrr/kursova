#include "suv.h"
#include "ui_suv.h"
#include "sqlitedbmanager.h"
#include <QSqlTableModel>

Suv::Suv(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Suv)
{
    ui->setupUi(this);
    loadSUVs();
}

Suv::~Suv() {
    delete ui;
}

void Suv::loadSUVs() {
    QSqlTableModel *model = new QSqlTableModel();
    model->setQuery("SELECT name, engineVolume, horsepower, fuelType, fuelConsumption, color, rentalPrice, isAvailable FROM cars WHERE bodyType = 'SUV'");
    ui->suvTableView->setModel(model);
}
