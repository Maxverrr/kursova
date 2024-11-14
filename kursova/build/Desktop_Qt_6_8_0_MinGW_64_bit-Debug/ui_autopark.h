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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_autopark
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *autopark)
    {
        if (autopark->objectName().isEmpty())
            autopark->setObjectName("autopark");
        autopark->resize(800, 450);
        pushButton = new QPushButton(autopark);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 0, 80, 24));
        pushButton_2 = new QPushButton(autopark);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 230, 80, 24));
        pushButton_3 = new QPushButton(autopark);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(400, 210, 80, 24));

        retranslateUi(autopark);

        QMetaObject::connectSlotsByName(autopark);
    } // setupUi

    void retranslateUi(QDialog *autopark)
    {
        autopark->setWindowTitle(QCoreApplication::translate("autopark", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("autopark", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("autopark", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("autopark", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class autopark: public Ui_autopark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOPARK_H
