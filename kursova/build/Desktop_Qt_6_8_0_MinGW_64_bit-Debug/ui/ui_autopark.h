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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Autopark
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbEco;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbSUV;
    QPushButton *pbDeleteCar;
    QPushButton *pbAll;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbBiznes;
    QPushButton *pbAddCar;
    QLabel *label;
    QPushButton *pbShowClients;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbSedan;
    QPushButton *pbResetClientsTable;
    QPushButton *pbResetTable;
    QPushButton *pbOrderCar;
    QTableView *carTableView;

    void setupUi(QDialog *Autopark)
    {
        if (Autopark->objectName().isEmpty())
            Autopark->setObjectName("Autopark");
        Autopark->resize(1250, 565);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Autopark->sizePolicy().hasHeightForWidth());
        Autopark->setSizePolicy(sizePolicy);
        Autopark->setSizeIncrement(QSize(100, 1));
        gridLayout = new QGridLayout(Autopark);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        pbEco = new QPushButton(Autopark);
        pbEco->setObjectName("pbEco");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbEco->sizePolicy().hasHeightForWidth());
        pbEco->setSizePolicy(sizePolicy1);
        pbEco->setMinimumSize(QSize(120, 120));
        pbEco->setSizeIncrement(QSize(1, 1));
        pbEco->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/img/img/Eco.png);\n"
"}\n"
""));

        gridLayout->addWidget(pbEco, 0, 8, 3, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        pbSUV = new QPushButton(Autopark);
        pbSUV->setObjectName("pbSUV");
        sizePolicy1.setHeightForWidth(pbSUV->sizePolicy().hasHeightForWidth());
        pbSUV->setSizePolicy(sizePolicy1);
        pbSUV->setMinimumSize(QSize(120, 120));
        pbSUV->setSizeIncrement(QSize(1, 1));
        pbSUV->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/img/img/SUV.png);\n"
"}\n"
""));

        gridLayout->addWidget(pbSUV, 0, 2, 3, 1);

        pbDeleteCar = new QPushButton(Autopark);
        pbDeleteCar->setObjectName("pbDeleteCar");
        pbDeleteCar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pbDeleteCar, 4, 2, 1, 1);

        pbAll = new QPushButton(Autopark);
        pbAll->setObjectName("pbAll");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbAll->sizePolicy().hasHeightForWidth());
        pbAll->setSizePolicy(sizePolicy2);
        pbAll->setMinimumSize(QSize(200, 30));
        pbAll->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 12pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pbAll, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 9, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        pbBiznes = new QPushButton(Autopark);
        pbBiznes->setObjectName("pbBiznes");
        sizePolicy1.setHeightForWidth(pbBiznes->sizePolicy().hasHeightForWidth());
        pbBiznes->setSizePolicy(sizePolicy1);
        pbBiznes->setMinimumSize(QSize(120, 120));
        pbBiznes->setSizeIncrement(QSize(1, 1));
        pbBiznes->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/img/img/Luxury.png);\n"
"}\n"
""));

        gridLayout->addWidget(pbBiznes, 0, 6, 3, 1);

        pbAddCar = new QPushButton(Autopark);
        pbAddCar->setObjectName("pbAddCar");
        pbAddCar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pbAddCar, 4, 0, 1, 1);

        label = new QLabel(Autopark);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pbShowClients = new QPushButton(Autopark);
        pbShowClients->setObjectName("pbShowClients");
        pbShowClients->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pbShowClients, 0, 10, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 7, 1, 1);

        pbSedan = new QPushButton(Autopark);
        pbSedan->setObjectName("pbSedan");
        sizePolicy1.setHeightForWidth(pbSedan->sizePolicy().hasHeightForWidth());
        pbSedan->setSizePolicy(sizePolicy1);
        pbSedan->setMinimumSize(QSize(120, 120));
        pbSedan->setSizeIncrement(QSize(1, 1));
        pbSedan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/img/img/Sedan.png);\n"
"}\n"
""));

        gridLayout->addWidget(pbSedan, 0, 4, 3, 1);

        pbResetClientsTable = new QPushButton(Autopark);
        pbResetClientsTable->setObjectName("pbResetClientsTable");
        pbResetClientsTable->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pbResetClientsTable, 2, 10, 1, 1);

        pbResetTable = new QPushButton(Autopark);
        pbResetTable->setObjectName("pbResetTable");
        pbResetTable->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 8pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pbResetTable, 4, 4, 1, 1);

        pbOrderCar = new QPushButton(Autopark);
        pbOrderCar->setObjectName("pbOrderCar");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pbOrderCar->sizePolicy().hasHeightForWidth());
        pbOrderCar->setSizePolicy(sizePolicy3);
        pbOrderCar->setMinimumSize(QSize(0, 30));
        pbOrderCar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 10pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pbOrderCar, 4, 8, 1, 1);

        carTableView = new QTableView(Autopark);
        carTableView->setObjectName("carTableView");
        carTableView->setEnabled(true);
        carTableView->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(carTableView, 3, 0, 1, 10);


        retranslateUi(Autopark);

        QMetaObject::connectSlotsByName(Autopark);
    } // setupUi

    void retranslateUi(QDialog *Autopark)
    {
        Autopark->setWindowTitle(QCoreApplication::translate("Autopark", "Dialog", nullptr));
        pbEco->setText(QString());
        pbSUV->setText(QString());
        pbDeleteCar->setText(QCoreApplication::translate("Autopark", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270", nullptr));
        pbAll->setText(QCoreApplication::translate("Autopark", "\320\222\321\201\321\226 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\321\226\320\273\321\226", nullptr));
        pbBiznes->setText(QString());
        pbAddCar->setText(QCoreApplication::translate("Autopark", "\320\241\321\202\320\262\320\276\321\200\320\270\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("Autopark", "\320\244\321\226\320\273\321\214\321\202\321\200\320\270:", nullptr));
        pbShowClients->setText(QCoreApplication::translate("Autopark", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272 \320\272\320\273\321\226\321\224\320\275\321\202\321\226\320\262", nullptr));
        pbSedan->setText(QString());
        pbResetClientsTable->setText(QCoreApplication::translate("Autopark", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\216 \320\267 \320\272\320\273\321\226\321\224\320\275\321\202\320\260\320\274\320\270", nullptr));
        pbResetTable->setText(QCoreApplication::translate("Autopark", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\216", nullptr));
        pbOrderCar->setText(QCoreApplication::translate("Autopark", "\320\227\320\260\320\274\320\276\320\262\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autopark: public Ui_Autopark {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOPARK_H
