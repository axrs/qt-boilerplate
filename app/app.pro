lessThan(QT_MAJOR_VERSION, 5) | lessThan(QT_MINOR_VERSION, 6) {
    error("You need at least Qt 5.6.")
}

TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)
