/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pbmain;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pbAutopark;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pbRules;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbsupport;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1270, 714);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	border-image: url(E:/kursova/mainwindow.jpg);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(5);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(91, 57));
        label->setMaximumSize(QSize(100, 100));
        label->setSizeIncrement(QSize(0, 0));
        label->setBaseSize(QSize(32, 18));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-image: url(E:/kursova/iconb.png);\n"
"}\n"
"\n"
""));
        label->setMidLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8("../iconb.png")));

        horizontalLayout->addWidget(label);

        pbmain = new QPushButton(centralwidget);
        pbmain->setObjectName("pbmain");
        pbmain->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbmain);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pbAutopark = new QPushButton(centralwidget);
        pbAutopark->setObjectName("pbAutopark");
        pbAutopark->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbAutopark);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        pbRules = new QPushButton(centralwidget);
        pbRules->setObjectName("pbRules");
        pbRules->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbRules);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_9 = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	border-image: url(D:/KN321/MaxBrydun/kursova/mainwindow.jpeg);\n"
"}"));
        formLayoutWidget = new QWidget(page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(120, 230, 451, 251));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(0, 0, 0);"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_3);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 18pt \"Segoe UI\";"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::LabelRole, verticalSpacer);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 18pt \"Segoe UI\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbsupport = new QPushButton(centralwidget);
        pbsupport->setObjectName("pbsupport");
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

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pbmain->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\262\320\275\320\260", nullptr));
        pbAutopark->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\277\320\260\321\200\320\272", nullptr));
        pbRules->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\276\320\262\320\270 \320\276\321\200\320\265\320\275\320\264\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\263\321\203\320\272\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\321\210\320\262\320\270\320\264\320\272\320\276  \321\202\320\260 \320\264\320\265\321\210\320\265\320\262\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\265\320\275\320\264\321\203\320\271\321\202\320\265 \320\260\320\262\321\202\320\276", nullptr));
        pbsupport->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\205.\320\237\321\226\320\264\321\202\321\200\320\270\320\274\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
