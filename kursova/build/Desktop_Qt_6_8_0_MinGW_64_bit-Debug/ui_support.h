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

class Ui_Support
{
public:

    void setupUi(QDialog *Support)
    {
        if (Support->objectName().isEmpty())
            Support->setObjectName("Support");
        Support->resize(1250, 565);
        Support->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Support);

        QMetaObject::connectSlotsByName(Support);
    } // setupUi

    void retranslateUi(QDialog *Support)
    {
        Support->setWindowTitle(QCoreApplication::translate("Support", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Support: public Ui_Support {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORT_H
