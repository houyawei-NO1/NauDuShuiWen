#-------------------------------------------------
#
# Project created by QtCreator 2022-08-19T16:42:17
#
#-------------------------------------------------

QT       += core gui charts serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NauDuShuiWen
TEMPLATE = app
RC_FILE += logo.rc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    bak_canthread.cpp \
    bak_mainwidget.cpp \
    bak_mainwindow.cpp \
        main.cpp \
    nanduwidget.cpp \
    menubarwid.cpp \
    pushbutton.cpp \
    serialport.cpp \
    toolbutton.cpp \
    ndmassegebox.cpp \
    ctipareawid.cpp \
    cstatewid.cpp \
    cdoublebutton.cpp \
    clickedlabel.cpp \
    ledwidget.cpp \
    chartviewwid.cpp \
    resultdialog.cpp

HEADERS += \
    bak_canthread.h \
    bak_mainwidget.h \
    bak_mainwindow.h \
    nanduwidget.h \
    menubarwid.h \
    pushbutton.h \
    serialport.h \
    toolbutton.h \
    ndmassegebox.h \
    ctipareawid.h \
    cstatewid.h \
    cdoublebutton.h \
    clickedlabel.h \
    ledwidget.h \
    chartviewwid.h \
    resultdialog.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./ -lControlCAN
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./ -lControlCAN

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

RESOURCES += \
    res.qrc

DISTFILES += \
    logo.rc
