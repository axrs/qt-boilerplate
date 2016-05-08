include ("../defaults.pri")
include ("../src/includes.pri")

QT += core testlib
QT -= gui

CONFIG += testcase
CONFIG -= console

SOURCES +=\
    main.cpp

HEADERS  += \
    autotest.h \
    testremoveme.h

#Include dependencies if required
LIBS +=
