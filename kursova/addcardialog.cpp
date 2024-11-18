#include "addcardialog.h"
#include "ui_addcardialog.h"
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

QString AddCarDialog::getIsAvailable() const {
    return ui->availableCombo->currentText();
}

void AddCarDialog::on_pbAccepted_clicked()
{
    accept();
}
