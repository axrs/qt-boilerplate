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
    testinteger.h \
    testmax.h \
    testdouble.h \
    testmin.h

#Include dependencies if required
LIBS +=
