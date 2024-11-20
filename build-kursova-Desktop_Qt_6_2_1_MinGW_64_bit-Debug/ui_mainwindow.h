/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbsupport;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pbmain;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbAutopark;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pbRules;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1270, 714);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	border-image: url(D:/KN321/MaxBrydun/kursova/mainwindow.jpg);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbsupport = new QPushButton(centralwidget);
        pbsupport->setObjectName(QString::fromUtf8("pbsupport"));
        QPalette palette;
        QBrush brush(QColor(87, 191, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(87, 191, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pbsupport->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pbsupport->setFont(font);
        pbsupport->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(87, 191, 255);\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(pbsupport);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	border-image: url(D:/KN321/MaxBrydun/kursova/mainwindow.jpeg);\n"
"}"));
        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(150, 70));
        label->setMaximumSize(QSize(150, 70));
        label->setSizeIncrement(QSize(0, 0));
        label->setBaseSize(QSize(32, 18));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-image: url(E:/kursova/iconb.png);\n"
"}\n"
"\n"
""));
        label->setMidLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8("../icono.PNG")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        pbmain = new QPushButton(centralwidget);
        pbmain->setObjectName(QString::fromUtf8("pbmain"));
        pbmain->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbmain);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pbAutopark = new QPushButton(centralwidget);
        pbAutopark->setObjectName(QString::fromUtf8("pbAutopark"));
        pbAutopark->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbAutopark);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pbRules = new QPushButton(centralwidget);
        pbRules->setObjectName(QString::fromUtf8("pbRules"));
        pbRules->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbRules);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Burunduk's Garage", nullptr));
        pbsupport->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\205.\320\237\321\226\320\264\321\202\321\200\320\270\320\274\320\272\320\260", nullptr));
        label->setText(QString());
        pbmain->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\262\320\275\320\260", nullptr));
        pbAutopark->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\277\320\260\321\200\320\272", nullptr));
        pbRules->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\276\320\262\320\270 \320\276\321\200\320\265\320\275\320\264\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\263\321\203\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
