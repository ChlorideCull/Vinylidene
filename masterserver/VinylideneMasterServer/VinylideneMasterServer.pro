#-------------------------------------------------
#
# Project created by QtCreator 2013-02-08T21:42:36
#
#-------------------------------------------------

QT       += core

QT       -= gui

DEFINES += BUILD=$$system(git log -1 --no-decorate --pretty=format:%h)

TARGET = VinylideneMasterServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    versionhandler.cpp

HEADERS += \
    versionhandler.h
