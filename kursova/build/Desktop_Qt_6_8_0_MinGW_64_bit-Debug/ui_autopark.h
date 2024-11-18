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

    void setupUi(QDialog *Autopark)
    {
        if (Autopark->objectName().isEmpty())
            Autopark->setObjectName("Autopark");
        Autopark->resize(780, 298);
        pbAddCar = new QPushButton(Autopark);
        pbAddCar->setObjectName("pbAddCar");
        pbAddCar->setGeometry(QRect(30, 270, 80, 24));
        pbDeleteCar = new QPushButton(Autopark);
        pbDeleteCar->setObjectName("pbDeleteCar");
        pbDeleteCar->setGeometry(QRect(130, 270, 80, 24));
        pushButton_4 = new QPushButton(Autopark);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(660, 50, 80, 24));
        pushButton_3 = new QPushButton(Autopark);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(540, 100, 80, 24));
        pushButton_2 = new QPushButton(Autopark);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(660, 100, 80, 24));
        pbSUV = new QPushButton(Autopark);
        pbSUV->setObjectName("pbSUV");
        pbSUV->setGeometry(QRect(540, 50, 80, 24));
        carTableView = new QTableView(Autopark);
        carTableView->setObjectName("carTableView");
        carTableView->setGeometry(QRect(0, 0, 501, 271));
        pbResetTable = new QPushButton(Autopark);
        pbResetTable->setObjectName("pbResetTable");
        pbResetTable->setGeometry(QRect(300, 270, 80, 24));

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
        pbResetTable->setText(QCoreApplication::translate("Autopark", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autopark: public Ui_Autopark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOPARK_H
