#include "addcardialog.h"
#include "ui_addcardialog.h"
#include <QFileDialog>
#include <QImageReader>
#include <QImage>
#include <QBuffer>


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

QByteArray AddCarDialog::getPhoto() const {
    return photoData;  // Повертаємо байтовий масив з фото
}

void AddCarDialog::on_pbAddPhoto_clicked() {
    // Вибір файлу для фото
    QString filePath = QFileDialog::getOpenFileName(this, "Select Photo", "", "Images (*.png *.jpg *.jpeg *.bmp *.gif)");
    if (!filePath.isEmpty()) {
        QImage image(filePath);
        if (!image.isNull()) {
            // Перетворення зображення в байтовий масив
            QBuffer buffer(&photoData);
            buffer.open(QIODevice::WriteOnly);
            image.save(&buffer, "PNG");  // Можна зберігати в іншому форматі
            ui->photoLabel->setPixmap(QPixmap::fromImage(image).scaled(100, 100, Qt::KeepAspectRatio));  // Відображення фото в QLabel
        }
    }
}

void AddCarDialog::on_pbAccepted_clicked()
{
    accept();
}


