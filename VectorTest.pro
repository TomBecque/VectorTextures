#-------------------------------------------------
#
# Project created by QtCreator 2015-10-26T11:45:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VectorTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    openglwindow.cpp \
    planewindow.cpp

HEADERS  += mainwindow.h \
    openglwindow.h \
    planewindow.h

FORMS    += mainwindow.ui

DISTFILES += \
    vector.vert \
    vector.frag
