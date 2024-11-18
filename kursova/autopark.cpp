#include "autopark.h"
#include "ui_autopark.h"
#include "addcardialog.h"
#include "sqlitedbmanager.h"
#include <QSqlTableModel>
#include <QMessageBox>

Autopark::Autopark(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autopark)
{
    ui->setupUi(this);

    dbManager = new SQLiteDBManager();
    loadCars();
}

Autopark::~Autopark()
{
    delete dbManager;
    delete ui;
}

void Autopark::loadCars()
{
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("cars");
    model->select();

    ui->carTableView->setModel(model);

    // Приховуємо колонку з id
    //ui->carTableView->setColumnHidden(0, true);
}

void Autopark::on_pbAddCar_clicked()
{
    AddCarDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {

        QString name = dialog.getName();
        QString bodyType = dialog.getBodyType();
        QString carType = dialog.getCarType();
        double engineVolume = dialog.getEngineVolume();
        int horsePower = dialog.getHorsePower();
        QString fuelType = dialog.getFuelType();
        double fuelConsumption = dialog.getFuelConsumption();
        QString color = dialog.getColor();
        double rentalPrice = dialog.getRentalPrice();
        QString isAvailable = dialog.getIsAvailable();

        if (dbManager->addCar(name, bodyType, carType, engineVolume, horsePower, fuelType, fuelConsumption, color, rentalPrice, isAvailable)) {
            QMessageBox::information(this, "Успіх", "Автомобіль успішно додано!");
            loadCars();
        } else {
            QMessageBox::warning(this, "Помилка", "Не вдалося додати автомобіль.");
        }
    }
}

void Autopark::on_pbDeleteCar_clicked()
{
    QModelIndexList selectedIndexes = ui->carTableView->selectionModel()->selectedRows();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Помилка", "Будь ласка, виберіть автомобіль для видалення.");
        return;
    }

    int row = selectedIndexes.first().row();
    QSqlTableModel *model = static_cast<QSqlTableModel*>(ui->carTableView->model());
    QString carName = model->data(model->index(row, 0)).toString();

    if (dbManager->removeCar(carName)) {
        QMessageBox::information(this, "Успіх", "Автомобіль успішно видалено!");
        loadCars();
    } else {
        QMessageBox::warning(this, "Помилка", "Не вдалося видалити автомобіль.");
    }
}

void Autopark::on_pbSUV_clicked() {
    // Отримуємо модель, підключену до QTableView
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Cars");

    // Встановлюємо фільтр за типом кузову SUV
    model->setFilter("bodyType = 'SUV'");
    model->select();

    // Налаштовуємо таблицю для відображення відфільтрованих даних
    ui->carTableView->setModel(model);
}


void Autopark::on_pbResetTable_clicked() {
    if (!dbManager->dropTable("Cars")) {
        QMessageBox::warning(this, "Помилка", "Не вдалося видалити таблицю Cars.");
        return;
    }

    if (!dbManager->createTables()) {
        QMessageBox::critical(this, "Помилка", "Не вдалося створити таблицю Cars заново.");
        return;
    }

    QMessageBox::information(this, "Успіх", "Таблиця Cars успішно скинута!");
    loadCars();
}

void Autopark::on_pbAll_clicked() {
    // Отримуємо модель, підключену до carTableView
    QSqlTableModel *model = static_cast<QSqlTableModel*>(ui->carTableView->model());

    // Перевіряємо, чи модель існує
    if (model) {
        // Скидаємо фільтр
        model->setFilter("");
        model->select();
    } else {
        // Якщо моделі немає, створюємо нову
        model = new QSqlTableModel(this, dbManager->getDB());
        model->setTable("Cars");
        model->select();

        // Призначаємо модель таблиці
        ui->carTableView->setModel(model);
    }
}


