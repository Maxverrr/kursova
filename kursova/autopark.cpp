#include "autopark.h"
#include "ui_autopark.h"

autopark::autopark(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::autopark)
{
    ui->setupUi(this);
}

autopark::~autopark()
{
    delete ui;
}
