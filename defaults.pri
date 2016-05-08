CONFIG += c++11

#This tells all projects (that include defaults.pri) to also use the
#`src` project folder as an includes path resolving library headers.
INCLUDEPATH += $$PWD/src
SRC_DIR = $$PWD

contains(DEFINES, DEVELOPER_MODE) {
    CONFIG += debug
    *-g++*|*clang* {
        QMAKE_CXXFLAGS += -Werror -Wall -Wextra
    }
    *clang* {
        QMAKE_CXXFLAGS += -Wno-error=inconsistent-missing-override
    }
}
