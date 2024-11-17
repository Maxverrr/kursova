#include "addcardialog.h"
#include "ui_addcardialog.h"
#include <QFileDialog>
#include <QImageReader>
#include <QImage>
#include <QBuffer>
#include <QMessageBox>

AddCarDialog::AddCarDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCarDialog)
{
    ui->setupUi(this);
}

AddCarDialog::~AddCarDialog()
{
    delete ui;
}

QString AddCarDialog::getName() const {
    return ui->nameEdit->text();
}

QString AddCarDialog::getBodyType() const {
    return ui->bodyTypeCombo->currentText();
}

QString AddCarDialog::getCarType() const {
    return ui->carTypeCombo->currentText();
}

double AddCarDialog::getEngineVolume() const {
    return ui->engineVolumeEdit->text().toDouble();
}

int AddCarDialog::getHorsePower() const {
    return ui->horsepowerEdit->text().toInt();
}

QString AddCarDialog::getFuelType() const {
    return ui->fuelTypeCombo->currentText();
}

double AddCarDialog::getFuelConsumption() const {
    return ui->fuelConsumptionEdit->text().toDouble();
}

QString AddCarDialog::getColor() const {
    return ui->colorEdit->text();
}

double AddCarDialog::getRentalPrice() const {
    return ui->rentalPriceEdit->text().toDouble();
}

void AddCarDialog::on_availableCheckBox_checkStateChanged(Qt::CheckState state)
{
    // Ваш код для обробки зміни стану чекбоксу
}

QByteArray AddCarDialog::getPhoto() const {
    return photoData;  // Повертаємо байтовий масив з фото
}

void AddCarDialog::on_pbAddPhoto_clicked() {
    QString filePath = QFileDialog::getOpenFileName(this, "Select Car Photo", "", "Images (*.png *.jpg *.bmp)");

    if (!filePath.isEmpty()) {
        QFile photoFile(filePath);
        QByteArray photoData;

        // Перевірка на успішне відкриття файлу
        if (photoFile.open(QIODevice::ReadOnly)) {
            // Зчитуємо всі байти з файлу
            photoData = photoFile.readAll();

            // Зменшуємо розмір зображення перед збереженням в базу
            QPixmap pixmap(filePath);
            pixmap = pixmap.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation);

            // Перетворюємо зменшене зображення в байтовий масив
            QBuffer buffer(&photoData);
            buffer.open(QIODevice::WriteOnly);
            pixmap.save(&buffer, "PNG");  // Зберігаємо зображення у форматі PNG

            qDebug() << "Photo data size:" << photoData.size();  // Перевірка розміру даних

            this->photoData = photoData;  // Збереження фото в класі
        } else {
            qDebug() << "Failed to open photo file.";
        }

        // Завантажуємо фото в UI (наприклад, для відображення користувачу)
        QPixmap pixmap;
        pixmap.loadFromData(photoData);
        ui->photoLabel->setPixmap(pixmap.scaled(ui->photoLabel->size(), Qt::KeepAspectRatio));
    }
}

void AddCarDialog::on_pbAccepted_clicked()
{
    accept();
}


