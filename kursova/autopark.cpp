#include "autopark.h"
#include "ui_autopark.h"
#include "addcardialog.h"
#include "addclientdialog.h"
#include "sqlitedbmanager.h"
#include <QSqlTableModel>
#include <QMessageBox>
#include <QInputDialog>


Autopark::Autopark(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autopark)
{
    ui->setupUi(this);
    this->dbManager = SQLiteDBManager::getInstance();

    loadCars();
    loadClients();
}

Autopark::~Autopark()
{
    delete ui;
}

void Autopark::loadCars()
{
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("cars");
    model->select();



    ui->carTableView->setModel(model);
    ui->carTableView->hideColumn(0);

    ui->carTableView->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Stretch);

    // Забороняємо редагування
    ui->carTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
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
    QString carName = model->data(model->index(row, 1)).toString();

    if (dbManager->removeCar(carName)) {
        QMessageBox::information(this, "Успіх", "Автомобіль успішно видалено!");
        loadCars();
    } else {
        QMessageBox::warning(this, "Помилка", "Не вдалося видалити автомобіль.");
    }
}

// Фільтри

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

void Autopark::on_pbSUV_clicked() {
    // Отримуємо модель, підключену до QTableView
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Cars");

    // Встановлюємо фільтр за типом кузову SUV
    model->setFilter("\"Тип кузову\" = 'SUV'");
    model->select();

    // Налаштовуємо таблицю для відображення відфільтрованих даних
    ui->carTableView->setModel(model);
}

void Autopark::on_pbSedan_clicked(){
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Cars");

    model->setFilter("\"Тип кузову\" = 'Седан'");
    model->select();

    ui->carTableView->setModel(model);
}

void Autopark::on_pbBiznes_clicked(){
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Cars");

    model->setFilter("\"Клас\" = 'Бізнес клас'");
    model->select();

    ui->carTableView->setModel(model);
}


void Autopark::on_pbEco_clicked(){
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Cars");

    model->setFilter("\"Клас\" = 'Економ клас'");
    model->select();

    ui->carTableView->setModel(model);
}

void Autopark::on_pbResetTable_clicked()
{
    int response = QMessageBox::question(this, "Підтвердження", "Ви впевнені, що хочете скинути таблицю?",
                                         QMessageBox::Yes | QMessageBox::No);
    if (response == QMessageBox::Yes) {
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
}

void Autopark::loadClients()
{
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Clients");
    model->select();

    // Задати стратегію для заборони редагування
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);


}

void Autopark::on_pbOrderCar_clicked() {
    QModelIndexList selectedIndexes = ui->carTableView->selectionModel()->selectedRows();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Помилка", "Будь ласка, виберіть автомобіль для оренди.");
        return;
    }

    int row = selectedIndexes.first().row();
    QSqlTableModel *carModel = static_cast<QSqlTableModel*>(ui->carTableView->model());
    QString carName = carModel->data(carModel->index(row, 1)).toString();

    // Перевіряємо, чи автомобіль доступний для оренди
    QString availability = carModel->data(carModel->index(row, 10)).toString();
    if (availability == "Недоступний") {
        QMessageBox::warning(this, "Помилка", "Цей автомобіль вже орендований.");
        return;
    }

    // Викликаємо діалог для введення даних клієнта
    AddClientDialog dialog(this);

    // Встановлюємо назву обраного автомобіля в поле rentedCarEdit
    dialog.setRentedCarName(carName);

    if (dialog.exec() == QDialog::Accepted) {
        QString phoneNumber = dialog.getPhoneNumber();
        QString email = dialog.getEmail();
        QString firstName = dialog.getFirstName();
        QString surname = dialog.getSurname();
        QString middleName = dialog.getMiddleName();
        QString rentedCarName = dialog.getRentedCarName(); // Тепер це буде містити назву обраного автомобіля

        // Додаємо клієнта та оновлюємо статус автомобіля на "Недоступний"
        if (dbManager->addClient(phoneNumber, email, firstName, surname, middleName, rentedCarName)) {
            dbManager->updateCarAvailability(rentedCarName, "Недоступний");

            QMessageBox::information(this, "Успіх", "Орендування автомобіля успішне!");
            loadClients();  // Оновлюємо список клієнтів
            loadCars();     // Оновлюємо список автомобілів
        } else {
            QMessageBox::warning(this, "Помилка", "Не вдалося орендувати автомобіль.");
        }
    }
}

void Autopark::on_pbShowClients_clicked() {
    // Виведення діалогу введення пароля
    bool ok;
    QString password = QInputDialog::getText(this, "Введіть пароль",
                                             "Пароль:", QLineEdit::Password,
                                             "", &ok);

    // Перевірка правильності пароля
    if (!ok || password != "admin") {
        QMessageBox::warning(this, "Помилка", "Невірний пароль!");
        return;
    }

    // Відображення таблиці клієнтів у новому вікні
    QDialog *clientsDialog = new QDialog(this);
    clientsDialog->setWindowTitle("Таблиця клієнтів");
    clientsDialog->resize(800, 600);

    QTableView *clientsView = new QTableView(clientsDialog);
    clientsView->setGeometry(10, 10, 780, 580);

    // Завантажуємо дані в таблицю
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Clients");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    clientsView->setModel(model);
    clientsView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    clientsDialog->exec();
    delete clientsDialog;
}

void Autopark::on_pbResetClientsTable_clicked() {
    bool ok;
    QString password = QInputDialog::getText(this, "Введіть пароль",
                                             "Пароль:", QLineEdit::Password,
                                             "", &ok);

    // Перевірка правильності пароля
    if (!ok || password != "admin") {
        QMessageBox::warning(this, "Помилка", "Невірний пароль!");
        return;
    }

    int response = QMessageBox::question(this, "Підтвердження", "Ви впевнені, що хочете скинути таблицю?",
                                         QMessageBox::Yes | QMessageBox::No);
    if (response == QMessageBox::Yes) {
        if (!dbManager->dropTable("Clients")) {
            QMessageBox::warning(this, "Помилка", "Не вдалося видалити таблицю Clients.");
            return;
        }
        if (!dbManager->createTables()) {
            QMessageBox::critical(this, "Помилка", "Не вдалося створити таблицю Clients заново.");
            return;
        }
        QMessageBox::information(this, "Успіх", "Таблиця Clients успішно скинута!");
        loadClients();
    }
}
