#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "autopark.h"
#include "support.h"
#include "rules.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(new Autopark(this)); //index 1
    ui->stackedWidget->addWidget(new Support(this)); //index 2
    ui->stackedWidget->addWidget(new Rules(this)); //index 3
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbmain_clicked()
{
    this->setStyleSheet("QMainWindow{ border-image: url(E:/kursova/mainwindow.jpg) }");
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pbAutopark_clicked()
{
    this->setStyleSheet("QMainWindow{ border-image: '' }");
    this->setStyleSheet("QMainWindow{ border-image: url(E:/kursova/autopark.png) }");
    ui->stackedWidget->setCurrentIndex(1);

}


void MainWindow::on_pbsupport_clicked()
{
   this->setStyleSheet("QMainWindow{ border-image: url(E:/kursova/support.jpg) }");
   ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pbRules_clicked()
{
    this->setStyleSheet("QMainWindow{ border-image: '' }");
    this->setStyleSheet("QMainWindow{ border-image: url(E:/kursova/rules.jpg) }");
    ui->stackedWidget->setCurrentIndex(3);
}

