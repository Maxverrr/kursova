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
    QSqlTableModel *model = new QSqlTableModel(this); // Передаємо this як батька, щоб автоматично видалити модель.
    model->setTable("cars"); // Вказуємо таблицю, з якою працюватимемо.
    model->setFilter("bodyType = 'SUV'"); // Встановлюємо фільтр для відображення лише потрібних записів.
    model->select(); // Завантажуємо дані з таблиці.

    ui->suvTableView->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, "Name");
    model->setHeaderData(1, Qt::Horizontal, "Engine Volume");
    model->setHeaderData(2, Qt::Horizontal, "Horsepower");
    model->setHeaderData(3, Qt::Horizontal, "Fuel Type");
    model->setHeaderData(4, Qt::Horizontal, "Fuel Consumption");
    model->setHeaderData(5, Qt::Horizontal, "Color");
    model->setHeaderData(6, Qt::Horizontal, "Rental Price");
    model->setHeaderData(7, Qt::Horizontal, "Availability");
}
