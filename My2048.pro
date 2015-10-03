#-------------------------------------------------
#
# Project created by QtCreator 2015-08-29T19:58:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = My2048
TEMPLATE = app


SOURCES += main.cpp\
        gui/mainwindow.cpp \
    gui/qgameboard.cpp \
    gui/qtile.cpp \
    core/tile.cpp \
    core/observer.cpp \
    core/subject.cpp \
    core/board.cpp \
    core/game.cpp \
    gui/qscorelable.cpp \
    gui/qwinwindow.cpp \
    gui/qlostwindow.cpp \
    gui/qtopscorelabel.cpp

HEADERS  += gui/mainwindow.h \
    gui/qgameboard.h \
    gui/qtile.h \
    core/tile.h \
    core/observer.h \
    core/subject.h \
    core/board.h \
    core/game.h \
    gui/qscorelable.h \
    gui/qwinwindow.h \
    gui/qlostwindow.h \
    gui/qtopscorelabel.h



