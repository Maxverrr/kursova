QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcardialog.cpp \
    addclientdialog.cpp \
    autopark.cpp \
    main.cpp \
    mainwindow.cpp \
    rules.cpp \
    sqlitedbmanager.cpp \
    support.cpp

HEADERS += \
    addcardialog.h \
    addclientdialog.h \
    autopark.h \
    mainwindow.h \
    rules.h \
    sqlitedbmanager.h \
    support.h

FORMS += \
    addcardialog.ui \
    addclientdialog.ui \
    autopark.ui \
    mainwindow.ui \
    rules.ui \
    support.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

    RC_ICONS = caricon.ico


#Share all project output files by directories
MOC_DIR = moc
RCC_DIR = rcc
UI_DIR = ui
unix:OBJECTS_DIR = unix
win32:OBJECTS_DIR = win32
macx:OBJECTS_DIR = mac

#If release-buid -> run windeploy applications, that will collect all the dlls
CONFIG(release, debug|release) {
    win32:QMAKE_POST_LINK = $$(QTDIR)/bin/windeployqt $$OUT_PWD/release
}
