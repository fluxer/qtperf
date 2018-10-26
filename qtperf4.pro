#-------------------------------------------------
#
# Project created by QtCreator 2011-08-17T11:33:31
#
#-------------------------------------------------

QT += core
equals(QT_MAJOR_VERSION, 5){
    QT += widgets
    TARGET = qtperf5
}
equals(QT_MAJOR_VERSION, 4) {
    QT += gui
    TARGET = qtperf4
}

TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    testwidget.cpp

HEADERS  += mainwindow.h \
    testwidget.h

FORMS    += mainwindow.ui \
    testwidget.ui

OTHER_FILES +=

RESOURCES += \
    resources.qrc
