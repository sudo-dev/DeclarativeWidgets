TEMPLATE = app
DEPENDPATH += .
INCLUDEPATH += . $$PWD/../lib
QT += qml widgets
LIBS += -ldeclarativewidgets

windows {
    release {
        LIBS +=-L$$PWD/../lib/Release
    } else {
        LIBS +=-L$$PWD/../lib/Debug
    }
} else {
    LIBS +=-L$$PWD/../lib
}