#include "support.h"
#include "ui_support.h"

Support::Support(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Support)
{
    ui->setupUi(this);
}

Support::~Support()
{
    delete ui;
}
