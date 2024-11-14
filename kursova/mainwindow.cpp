#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "autopark.h"
#include "support.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbmain_clicked()
{
    MainWindow *dialog = new MainWindow(this);
    dialog->show();
}

void MainWindow::on_pbautopark_clicked()
{
    autopark *dialog = new autopark(this);
    dialog->show();
}


void MainWindow::on_pbsupport_clicked()
{
    support *dialog = new support(this);
    dialog->show();
}


