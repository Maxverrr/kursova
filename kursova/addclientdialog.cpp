#include "addclientdialog.h"
#include "ui_addclientdialog.h"

AddClientDialog::AddClientDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddClientDialog)
{
    ui->setupUi(this);
}

AddClientDialog::~AddClientDialog()
{
    delete ui;
}

QString AddClientDialog::getPhoneNumber() const {
    return ui->phoneNumberEdit->text();  // Відповідає полю phoneNumberEdit
}

QString AddClientDialog::getEmail() const {
    return ui->emailEdit->text();  // Відповідає полю emailEdit
}

QString AddClientDialog::getFirstName() const {
    return ui->firstNameEdit->text();  // Відповідає полю firstNameEdit
}

QString AddClientDialog::getSurname() const {
    return ui->surnameEdit->text();  // Відповідає полю surnameEdit
}

QString AddClientDialog::getMiddleName() const {
    return ui->middleNameEdit->text();  // Відповідає полю middleNameEdit
}

void AddClientDialog::setRentedCarName(const QString &carName) {
    ui->rentedCarEdit->setText(carName);
}

QString AddClientDialog::getRentedCarName() const {
    return ui->rentedCarEdit->text();  // Змінили на rentedCarEdit
}

void AddClientDialog::on_pbAcceptClient_clicked()
{
    accept();
}


