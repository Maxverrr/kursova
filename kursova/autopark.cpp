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

    // Створення делегата для відображення фото
    QStyledItemDelegate *delegate = new QStyledItemDelegate(this);
    connect(delegate, &QStyledItemDelegate::paint, this, [this](QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) {
        if (index.isValid()) {
            QByteArray photoData = index.data(Qt::DisplayRole).toByteArray();
            if (!photoData.isEmpty()) {
                QImage image;
                image.loadFromData(photoData);
                QPixmap pixmap = QPixmap::fromImage(image).scaled(option.rect.size(), Qt::KeepAspectRatio);
                painter->drawPixmap(option.rect, pixmap);
            }
        }
    });

    ui->carTableView->setItemDelegateForColumn(10, delegate);  // Номер стовпця з фото

    ui->carTableView->setModel(model);
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

        // Додаємо новий автомобіль в базу даних
        if (dbManager->addCar(name, bodyType, carType, engineVolume, horsePower, fuelType, fuelConsumption, color, rentalPrice)) {
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
    QString carName = model->data(model->index(row, 1)).toString();  // Припускаємо, що друга колонка - це ім'я автомобіля

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

