/********************************************************************************
** Form generated from reading UI file 'autopark.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
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

    void setupUi(QDialog *Autopark)
    {
        if (Autopark->objectName().isEmpty())
            Autopark->setObjectName(QString::fromUtf8("Autopark"));
        Autopark->resize(780, 298);
        pbAddCar = new QPushButton(Autopark);
        pbAddCar->setObjectName(QString::fromUtf8("pbAddCar"));
        pbAddCar->setGeometry(QRect(30, 270, 80, 24));
        pbDeleteCar = new QPushButton(Autopark);
        pbDeleteCar->setObjectName(QString::fromUtf8("pbDeleteCar"));
        pbDeleteCar->setGeometry(QRect(130, 270, 80, 24));
        pushButton_4 = new QPushButton(Autopark);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 50, 80, 24));
        pushButton_3 = new QPushButton(Autopark);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 100, 80, 24));
        pushButton_2 = new QPushButton(Autopark);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 100, 80, 24));
        pbSUV = new QPushButton(Autopark);
        pbSUV->setObjectName(QString::fromUtf8("pbSUV"));
        pbSUV->setGeometry(QRect(540, 50, 80, 24));
        carTableView = new QTableView(Autopark);
        carTableView->setObjectName(QString::fromUtf8("carTableView"));
        carTableView->setGeometry(QRect(0, 0, 501, 271));
        pbResetTable = new QPushButton(Autopark);
        pbResetTable->setObjectName(QString::fromUtf8("pbResetTable"));
        pbResetTable->setGeometry(QRect(300, 270, 101, 24));
        pbAll = new QPushButton(Autopark);
        pbAll->setObjectName(QString::fromUtf8("pbAll"));
        pbAll->setGeometry(QRect(610, 20, 80, 21));

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
    } // retranslateUi

};

namespace Ui {
    class Autopark: public Ui_Autopark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOPARK_H
