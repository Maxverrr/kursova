/********************************************************************************
** Form generated from reading UI file 'addclientdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCLIENTDIALOG_H
#define UI_ADDCLIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddClientDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *phoneNumberEdit;
    QLineEdit *emailEdit;
    QLineEdit *firstNameEdit;
    QLineEdit *surnameEdit;
    QLineEdit *middleNameEdit;
    QLineEdit *rentedCarEdit;
    QPushButton *pbAcceptClient;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *AddClientDialog)
    {
        if (AddClientDialog->objectName().isEmpty())
            AddClientDialog->setObjectName("AddClientDialog");
        AddClientDialog->resize(753, 446);
        formLayoutWidget = new QWidget(AddClientDialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 20, 691, 401));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        phoneNumberEdit = new QLineEdit(formLayoutWidget);
        phoneNumberEdit->setObjectName("phoneNumberEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, phoneNumberEdit);

        emailEdit = new QLineEdit(formLayoutWidget);
        emailEdit->setObjectName("emailEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, emailEdit);

        firstNameEdit = new QLineEdit(formLayoutWidget);
        firstNameEdit->setObjectName("firstNameEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, firstNameEdit);

        surnameEdit = new QLineEdit(formLayoutWidget);
        surnameEdit->setObjectName("surnameEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, surnameEdit);

        middleNameEdit = new QLineEdit(formLayoutWidget);
        middleNameEdit->setObjectName("middleNameEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, middleNameEdit);

        rentedCarEdit = new QLineEdit(formLayoutWidget);
        rentedCarEdit->setObjectName("rentedCarEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, rentedCarEdit);

        pbAcceptClient = new QPushButton(formLayoutWidget);
        pbAcceptClient->setObjectName("pbAcceptClient");

        formLayout->setWidget(6, QFormLayout::FieldRole, pbAcceptClient);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);


        retranslateUi(AddClientDialog);

        QMetaObject::connectSlotsByName(AddClientDialog);
    } // setupUi

    void retranslateUi(QDialog *AddClientDialog)
    {
        AddClientDialog->setWindowTitle(QCoreApplication::translate("AddClientDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddClientDialog", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203", nullptr));
        pbAcceptClient->setText(QCoreApplication::translate("AddClientDialog", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("AddClientDialog", "\320\225\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260 \320\277\320\276\321\210\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("AddClientDialog", "\320\206\320\274'\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("AddClientDialog", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("AddClientDialog", "\320\237\320\276-\320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", nullptr));
        label_6->setText(QCoreApplication::translate("AddClientDialog", "\320\222\320\270\320\261\321\200\320\260\320\275\320\270\320\271 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\321\226\320\273\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddClientDialog: public Ui_AddClientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCLIENTDIALOG_H
