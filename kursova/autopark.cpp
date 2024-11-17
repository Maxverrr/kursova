#include "autopark.h"
#include "ui_autopark.h"
#include "addcardialog.h"
#include "sqlitedbmanager.h"
#include <QSqlTableModel>
#include <QMessageBox>
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include <QStyledItemDelegate>
#include "PhotoDelegate.h"
#include <QLabel>


Autopark::Autopark(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autopark)
{
    ui->setupUi(this);

    // Створення об'єкта для роботи з базою даних
    dbManager = new SQLiteDBManager();

    // Завантаження даних в таблицю
    loadCars();
}

Autopark::~Autopark()
{
    delete dbManager;
    delete ui;
}

void Autopark::loadCars()
{
    // Створення моделі для відображення автомобілів
    QSqlTableModel *model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("cars");
    model->select();

    // Налаштування відображення моделі
    ui->carTableView->setModel(model);

    // Приховуємо колонку з id
    ui->carTableView->setColumnHidden(0, true);

    // Обробка кожного ряду для відображення фотографій
    for (int row = 0; row < model->rowCount(); ++row) {
        QByteArray photoData = model->data(model->index(row, 10)).toByteArray(); // Отримуємо дані фото з бази

        if (!photoData.isEmpty()) {
            QPixmap pixmap;

            // Перевіряємо, чи є дійсні байтові дані зображення
            if (pixmap.loadFromData(photoData)) {
                // Масштабуємо зображення до потрібного розміру
                pixmap = pixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);

                // Створюємо QLabel і встановлюємо в нього зображення
                QLabel *photoLabel = new QLabel();
                photoLabel->setPixmap(pixmap);

                // Встановлюємо QLabel в таблицю на відповідну позицію
                ui->carTableView->setIndexWidget(model->index(row, 10), photoLabel);
            } else {
                // Якщо зображення не вдалося завантажити, можна поставити за замовчуванням якусь картинку
                QLabel *photoLabel = new QLabel();
                photoLabel->setText("No Image"); // Текст у разі відсутності зображення
                ui->carTableView->setIndexWidget(model->index(row, 10), photoLabel);
            }
        }
    }
}


void Autopark::on_pbAddCar_clicked()
{
    AddCarDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        // Отримуємо введені дані
        QString name = dialog.getName();
        QString bodyType = dialog.getBodyType();
        QString carType = dialog.getCarType();
        double engineVolume = dialog.getEngineVolume();
        int horsePower = dialog.getHorsePower();
        QString fuelType = dialog.getFuelType();
        double fuelConsumption = dialog.getFuelConsumption();
        QString color = dialog.getColor();
        double rentalPrice = dialog.getRentalPrice();
        QByteArray photoData = dialog.getPhoto();  // Отримуємо фото з діалогу

        // Додаємо новий автомобіль в базу даних
        if (dbManager->addCar(name, bodyType, carType, engineVolume, horsePower, fuelType, fuelConsumption, color, rentalPrice, true, photoData)) {
            QMessageBox::information(this, "Успіх", "Автомобіль успішно додано!");
            loadCars();  // Оновлюємо таблицю
        } else {
            QMessageBox::warning(this, "Помилка", "Не вдалося додати автомобіль.");
        }
    }
}



void Autopark::on_pbDeleteCar_clicked()
{
    // Отримуємо вибраний автомобіль за іменем з таблиці
    QModelIndexList selectedIndexes = ui->carTableView->selectionModel()->selectedRows();
    if (selectedIndexes.isEmpty()) {
        QMessageBox::warning(this, "Помилка", "Будь ласка, виберіть автомобіль для видалення.");
        return;
    }

    int row = selectedIndexes.first().row();
    QSqlTableModel *model = static_cast<QSqlTableModel*>(ui->carTableView->model());
    QString carName = model->data(model->   index(row, 1)).toString();  // Припускаємо, що друга колонка - це ім'я автомобіля

    // Видаляємо автомобіль за іменем
    if (dbManager->removeCar(carName)) {
        QMessageBox::information(this, "Успіх", "Автомобіль успішно видалено!");
        loadCars();  // Оновлюємо таблицю
    } else {
        QMessageBox::warning(this, "Помилка", "Не вдалося видалити автомобіль.");
    }
}




void Autopark::on_pbSUV_clicked()
{

}

