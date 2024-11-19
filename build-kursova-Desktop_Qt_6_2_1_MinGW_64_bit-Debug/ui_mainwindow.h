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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pbmain;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pbAutopark;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbsupport;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 675);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	border-image: ur(D:/KN321/MaxBrydun/kursova/mainwindow.jpeg);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
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
        pbmain->setObjectName(QString::fromUtf8("pbmain"));
        pbmain->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbmain);

        horizontalSpacer_5 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pbAutopark = new QPushButton(centralwidget);
        pbAutopark->setObjectName(QString::fromUtf8("pbAutopark"));
        pbAutopark->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pbAutopark);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 900 14pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pbsupport = new QPushButton(centralwidget);
        pbsupport->setObjectName(QString::fromUtf8("pbsupport"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pbsupport->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pbsupport->setFont(font);
        pbsupport->setStyleSheet(QString::fromUtf8("QPushButton { background-color: red }"));

        horizontalLayout_2->addWidget(pbsupport);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pbmain->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\320\273\320\276\320\262\320\275\320\260", nullptr));
        pbAutopark->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\277\320\260\321\200\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\276\320\262\320\270 \320\276\321\200\320\265\320\275\320\264\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\263\321\203\320\272\320\270", nullptr));
        pbsupport->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\205.\320\237\321\226\320\264\321\202\321\200\320\270\320\274\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
