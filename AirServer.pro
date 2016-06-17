#-------------------------------------------------
#
# Project created by QtCreator 2016-06-02T10:52:34
#
#-------------------------------------------------

QT       += core gui network multimediawidgets avwidgets av

CONFIG -= app_bundle

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AirServer
TEMPLATE = app

SOURCES += src/main.cpp\
    src/bonjourserviceregister.cpp \
    src/main.cpp \
    src/myserver.cpp \
    src/NtpClient.cpp \
    src/NtpReply.cpp \
    src/ntpthread.cpp \
    src/playerwindow.cpp \
    src/myclient.cpp

HEADERS  += \
    src/bonjourrecord.h \
    src/bonjourserviceregister.h \
    src/config.h \
    src/myserver.h \
    src/NtpClient.h \
    src/NtpPacket.h \
    src/NtpReply.h \
    src/NtpReply_p.h \
    src/ntpthread.h \
    src/NtpTimestamp.h \
    src/QNtp.h \
    src/playerwindow.h \
    src/myclient.h

LIBS += -L$$PWD/lib/ -lqntp -ldnssd

INCLUDEPATH += $$PWD/include
