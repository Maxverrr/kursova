QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcardialog.cpp \
    autopark.cpp \
    main.cpp \
    mainwindow.cpp \
    sqlitedbmanager.cpp \
    support.cpp \
    suv.cpp

HEADERS += \
    addcardialog.h \
    autopark.h \
    mainwindow.h \
    sqlitedbmanager.h \
    support.h \
    suv.h

FORMS += \
    addcardialog.ui \
    autopark.ui \
    mainwindow.ui \
    support.ui \
    suv.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
