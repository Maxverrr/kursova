/********************************************************************************
** Form generated from reading UI file 'addcardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCARDIALOG_H
#define UI_ADDCARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCarDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QComboBox *bodyTypeCombo;
    QLabel *label_4;
    QComboBox *carTypeCombo;
    QLabel *label_5;
    QLineEdit *engineVolumeEdit;
    QLabel *label_6;
    QLineEdit *horsepowerEdit;
    QLabel *label_7;
    QComboBox *fuelTypeCombo;
    QLabel *label_8;
    QLineEdit *fuelConsumptionEdit;
    QLabel *label_9;
    QLineEdit *colorEdit;
    QLabel *label_10;
    QLineEdit *rentalPriceEdit;
    QLabel *label_11;
    QCheckBox *availableCheckBox;
    QPushButton *pbAccepted;
    QLabel *photoLabel;
    QPushButton *pbAddPhoto;

    void setupUi(QDialog *AddCarDialog)
    {
        if (AddCarDialog->objectName().isEmpty())
            AddCarDialog->setObjectName("AddCarDialog");
        AddCarDialog->resize(720, 519);
        formLayoutWidget = new QWidget(AddCarDialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(90, 50, 441, 421));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nameEdit = new QLineEdit(formLayoutWidget);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        bodyTypeCombo = new QComboBox(formLayoutWidget);
        bodyTypeCombo->addItem(QString());
        bodyTypeCombo->addItem(QString());
        bodyTypeCombo->addItem(QString());
        bodyTypeCombo->addItem(QString());
        bodyTypeCombo->addItem(QString());
        bodyTypeCombo->setObjectName("bodyTypeCombo");

        formLayout->setWidget(1, QFormLayout::FieldRole, bodyTypeCombo);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        carTypeCombo = new QComboBox(formLayoutWidget);
        carTypeCombo->addItem(QString());
        carTypeCombo->addItem(QString());
        carTypeCombo->addItem(QString());
        carTypeCombo->addItem(QString());
        carTypeCombo->setObjectName("carTypeCombo");

        formLayout->setWidget(2, QFormLayout::FieldRole, carTypeCombo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        engineVolumeEdit = new QLineEdit(formLayoutWidget);
        engineVolumeEdit->setObjectName("engineVolumeEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, engineVolumeEdit);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        horsepowerEdit = new QLineEdit(formLayoutWidget);
        horsepowerEdit->setObjectName("horsepowerEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, horsepowerEdit);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        fuelTypeCombo = new QComboBox(formLayoutWidget);
        fuelTypeCombo->addItem(QString());
        fuelTypeCombo->addItem(QString());
        fuelTypeCombo->addItem(QString());
        fuelTypeCombo->setObjectName("fuelTypeCombo");

        formLayout->setWidget(5, QFormLayout::FieldRole, fuelTypeCombo);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        fuelConsumptionEdit = new QLineEdit(formLayoutWidget);
        fuelConsumptionEdit->setObjectName("fuelConsumptionEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, fuelConsumptionEdit);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        colorEdit = new QLineEdit(formLayoutWidget);
        colorEdit->setObjectName("colorEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, colorEdit);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_10);

        rentalPriceEdit = new QLineEdit(formLayoutWidget);
        rentalPriceEdit->setObjectName("rentalPriceEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, rentalPriceEdit);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName("label_11");

        formLayout->setWidget(9, QFormLayout::LabelRole, label_11);

        availableCheckBox = new QCheckBox(formLayoutWidget);
        availableCheckBox->setObjectName("availableCheckBox");

        formLayout->setWidget(9, QFormLayout::FieldRole, availableCheckBox);

        pbAccepted = new QPushButton(formLayoutWidget);
        pbAccepted->setObjectName("pbAccepted");

        formLayout->setWidget(11, QFormLayout::FieldRole, pbAccepted);

        photoLabel = new QLabel(formLayoutWidget);
        photoLabel->setObjectName("photoLabel");

        formLayout->setWidget(10, QFormLayout::FieldRole, photoLabel);

        pbAddPhoto = new QPushButton(formLayoutWidget);
        pbAddPhoto->setObjectName("pbAddPhoto");

        formLayout->setWidget(11, QFormLayout::LabelRole, pbAddPhoto);


        retranslateUi(AddCarDialog);

        QMetaObject::connectSlotsByName(AddCarDialog);
    } // setupUi

    void retranslateUi(QDialog *AddCarDialog)
    {
        AddCarDialog->setWindowTitle(QCoreApplication::translate("AddCarDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AddCarDialog", "\320\235\320\260\320\262\320\267\320\262\320\260 \321\202\320\260 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("AddCarDialog", "\320\242\320\270\320\277 \320\272\321\203\320\267\320\276\320\262\321\203", nullptr));
        bodyTypeCombo->setItemText(0, QCoreApplication::translate("AddCarDialog", "\320\262\320\270\320\261\321\200\320\260\321\202\320\270", nullptr));
        bodyTypeCombo->setItemText(1, QCoreApplication::translate("AddCarDialog", "SUV", nullptr));
        bodyTypeCombo->setItemText(2, QCoreApplication::translate("AddCarDialog", "\320\241\320\265\320\264\320\260\320\275", nullptr));
        bodyTypeCombo->setItemText(3, QCoreApplication::translate("AddCarDialog", "\320\243\320\275\321\226\320\262\320\265\321\200\321\201\320\260\320\273", nullptr));
        bodyTypeCombo->setItemText(4, QCoreApplication::translate("AddCarDialog", "\320\245\320\265\321\202\321\207\320\261\320\265\320\272", nullptr));

        label_4->setText(QCoreApplication::translate("AddCarDialog", "\320\232\320\273\320\260\321\201 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\321\226\320\273\321\216", nullptr));
        carTypeCombo->setItemText(0, QCoreApplication::translate("AddCarDialog", "\320\262\320\270\320\261\321\200\320\260\321\202\320\270", nullptr));
        carTypeCombo->setItemText(1, QCoreApplication::translate("AddCarDialog", "\320\221\320\206\320\267\320\275\320\265\321\201 \320\272\320\273\320\260\321\201", nullptr));
        carTypeCombo->setItemText(2, QCoreApplication::translate("AddCarDialog", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202", nullptr));
        carTypeCombo->setItemText(3, QCoreApplication::translate("AddCarDialog", "\320\225\320\272\320\276\320\275\320\276\320\274 \320\272\320\273\320\260\321\201", nullptr));

        label_5->setText(QCoreApplication::translate("AddCarDialog", "\320\236\320\261'\321\224\320\274 \320\274\320\276\321\202\320\276\321\200\321\203", nullptr));
        label_6->setText(QCoreApplication::translate("AddCarDialog", "\320\232-\321\201\321\202\321\214 \320\272\321\226\320\275\321\201\321\214\320\272\320\270\321\205 \321\201\320\270\320\273", nullptr));
        label_7->setText(QCoreApplication::translate("AddCarDialog", "\320\242\320\270\320\277 \320\277\320\260\320\273\320\270\320\262\320\260", nullptr));
        fuelTypeCombo->setItemText(0, QCoreApplication::translate("AddCarDialog", "\320\262\320\270\320\261\321\200\320\260\321\202\320\270", nullptr));
        fuelTypeCombo->setItemText(1, QCoreApplication::translate("AddCarDialog", "\320\224\320\270\320\267\320\265\320\273\321\214", nullptr));
        fuelTypeCombo->setItemText(2, QCoreApplication::translate("AddCarDialog", "\320\221\320\265\320\275\320\267\320\270\320\275", nullptr));

        label_8->setText(QCoreApplication::translate("AddCarDialog", "\320\240\320\276\320\267\321\205\321\226\320\264", nullptr));
        label_9->setText(QCoreApplication::translate("AddCarDialog", "\320\232\320\276\320\273\321\226\321\200", nullptr));
        label_10->setText(QCoreApplication::translate("AddCarDialog", "\320\246\321\226\320\275\320\260 \320\267\320\260 \320\264\320\276\320\261\321\203", nullptr));
        label_11->setText(QCoreApplication::translate("AddCarDialog", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        availableCheckBox->setText(QCoreApplication::translate("AddCarDialog", "CheckBox", nullptr));
        pbAccepted->setText(QCoreApplication::translate("AddCarDialog", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        photoLabel->setText(QCoreApplication::translate("AddCarDialog", "TextLabel", nullptr));
        pbAddPhoto->setText(QCoreApplication::translate("AddCarDialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCarDialog: public Ui_AddCarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCARDIALOG_H
