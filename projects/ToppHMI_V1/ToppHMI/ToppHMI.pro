QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

DESTDIR = $$PWD/exe/
TARGET = app

INCLUDEPATH += $$PWD/inc

#LIBS += $$PWD/lib



SOURCES += \
    cameraui.cpp \
    main.cpp \
    topphmi.cpp

HEADERS += \
    cameraui.h \
    submain.h \
    topphmi.h

FORMS += \
    cameraui.ui \
    topphmi.ui

