/********************************************************************************
** Form generated from reading UI file 'autopark.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOPARK_H
#define UI_AUTOPARK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Autopark
{
public:
    QPushButton *pbAddCar;
    QPushButton *pbDeleteCar;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pbSUV;
    QTableView *carTableView;
    QPushButton *pbResetTable;
    QPushButton *pbAll;
    QPushButton *pbOrderCar;
    QPushButton *pbResetClientsTable;
    QTableView *clientsTableView;

    void setupUi(QDialog *Autopark)
    {
        if (Autopark->objectName().isEmpty())
            Autopark->setObjectName("Autopark");
        Autopark->resize(1180, 523);
        pbAddCar = new QPushButton(Autopark);
        pbAddCar->setObjectName("pbAddCar");
        pbAddCar->setGeometry(QRect(10, 270, 80, 24));
        pbDeleteCar = new QPushButton(Autopark);
        pbDeleteCar->setObjectName("pbDeleteCar");
        pbDeleteCar->setGeometry(QRect(240, 270, 80, 24));
        pushButton_4 = new QPushButton(Autopark);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(1070, 50, 80, 24));
        pushButton_3 = new QPushButton(Autopark);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(900, 100, 80, 24));
        pushButton_2 = new QPushButton(Autopark);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1070, 100, 80, 24));
        pbSUV = new QPushButton(Autopark);
        pbSUV->setObjectName("pbSUV");
        pbSUV->setGeometry(QRect(900, 50, 80, 24));
        carTableView = new QTableView(Autopark);
        carTableView->setObjectName("carTableView");
        carTableView->setGeometry(QRect(10, 0, 881, 261));
        pbResetTable = new QPushButton(Autopark);
        pbResetTable->setObjectName("pbResetTable");
        pbResetTable->setGeometry(QRect(780, 270, 113, 24));
        pbAll = new QPushButton(Autopark);
        pbAll->setObjectName("pbAll");
        pbAll->setGeometry(QRect(900, 0, 87, 24));
        pbOrderCar = new QPushButton(Autopark);
        pbOrderCar->setObjectName("pbOrderCar");
        pbOrderCar->setGeometry(QRect(20, 500, 80, 24));
        pbResetClientsTable = new QPushButton(Autopark);
        pbResetClientsTable->setObjectName("pbResetClientsTable");
        pbResetClientsTable->setGeometry(QRect(480, 490, 181, 24));
        clientsTableView = new QTableView(Autopark);
        clientsTableView->setObjectName("clientsTableView");
        clientsTableView->setGeometry(QRect(10, 300, 641, 191));

        retranslateUi(Autopark);

        QMetaObject::connectSlotsByName(Autopark);
    } // setupUi

    void retranslateUi(QDialog *Autopark)
    {
        Autopark->setWindowTitle(QCoreApplication::translate("Autopark", "Dialog", nullptr));
        pbAddCar->setText(QCoreApplication::translate("Autopark", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        pbDeleteCar->setText(QCoreApplication::translate("Autopark", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Autopark", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Autopark", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Autopark", "PushButton", nullptr));
        pbSUV->setText(QCoreApplication::translate("Autopark", "SUV", nullptr));
        pbResetTable->setText(QCoreApplication::translate("Autopark", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\216", nullptr));
        pbAll->setText(QCoreApplication::translate("Autopark", "\320\222\321\201\321\226 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\321\226\320\273\321\226", nullptr));
        pbOrderCar->setText(QCoreApplication::translate("Autopark", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
        pbResetClientsTable->setText(QCoreApplication::translate("Autopark", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \321\202\320\262\320\261\320\273\320\270\321\206\321\216 \320\267 \320\272\320\273\321\226\321\224\320\275\321\202\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autopark: public Ui_Autopark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOPARK_H
