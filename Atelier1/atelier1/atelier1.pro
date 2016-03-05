TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Model.cpp \
    View.cpp \
    Ball.cpp

include(deployment.pri)
qtcAddDeployment()

LIBS+=-lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

HEADERS += \
    Model.h \
    View.h \
    Ball.h

OTHER_FILES += \
    Images/city.png
