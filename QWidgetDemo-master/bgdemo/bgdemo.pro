#-------------------------------------------------
#
# Project created by QtCreator 2017-08-19T20:24:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 5): QT += core5compat

TARGET      = bgdemo
TEMPLATE    = app
DESTDIR     = $$PWD/../bin
CONFIG      += warn_off

SOURCES     += main.cpp
SOURCES     += widget.cpp
HEADERS     += widget.h
FORMS       += widget.ui
RESOURCES   += rc.qrc
