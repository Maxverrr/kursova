/********************************************************************************
** Form generated from reading UI file 'suv.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUV_H
#define UI_SUV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Suv
{
public:
    QTableView *suvTableView;

    void setupUi(QDialog *Suv)
    {
        if (Suv->objectName().isEmpty())
            Suv->setObjectName("Suv");
        Suv->resize(800, 450);
        suvTableView = new QTableView(Suv);
        suvTableView->setObjectName("suvTableView");
        suvTableView->setGeometry(QRect(95, 61, 621, 291));

        retranslateUi(Suv);

        QMetaObject::connectSlotsByName(Suv);
    } // setupUi

    void retranslateUi(QDialog *Suv)
    {
        Suv->setWindowTitle(QCoreApplication::translate("Suv", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Suv: public Ui_Suv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUV_H
