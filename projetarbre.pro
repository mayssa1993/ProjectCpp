#-------------------------------------------------
#
# Project created by QtCreator 2015-06-30T11:30:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projetarbre
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    create_tree.cpp \
    menu.cpp \
    noeud.cpp \
    tree.cpp

HEADERS  += mainwindow.h \
    create_tree.h \
    menu.h \
    noeud.h \
    tree.h

FORMS    += mainwindow.ui \
    create_tree.ui \
    menu.ui
