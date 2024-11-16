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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Support
{
public:
    QLabel *label;

    void setupUi(QDialog *Support)
    {
        if (Support->objectName().isEmpty())
            Support->setObjectName("Support");
        Support->resize(800, 450);
        label = new QLabel(Support);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 751, 391));
        QFont font;
        font.setPointSize(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        retranslateUi(Support);

        QMetaObject::connectSlotsByName(Support);
    } // setupUi

    void retranslateUi(QDialog *Support)
    {
        Support->setWindowTitle(QCoreApplication::translate("Support", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Support", "              \320\220 \320\275\320\265\320\274\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Support: public Ui_Support {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORT_H
