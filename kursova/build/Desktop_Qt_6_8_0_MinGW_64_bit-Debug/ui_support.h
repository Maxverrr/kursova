/********************************************************************************
** Form generated from reading UI file 'support.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPORT_H
#define UI_SUPPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_support
{
public:

    void setupUi(QDialog *support)
    {
        if (support->objectName().isEmpty())
            support->setObjectName("support");
        support->resize(800, 450);

        retranslateUi(support);

        QMetaObject::connectSlotsByName(support);
    } // setupUi

    void retranslateUi(QDialog *support)
    {
        support->setWindowTitle(QCoreApplication::translate("support", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class support: public Ui_support {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORT_H
