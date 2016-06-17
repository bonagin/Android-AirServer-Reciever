#ifndef PLAYERWINDOW_H
#define PLAYERWINDOW_H

#include <QWidget>
#include <QtAV>
#include <QtAVWidgets>
#include <QHostInfo>
#include "myserver.h"
#include "myclient.h"

QT_BEGIN_NAMESPACE
class QSlider;
class QPushButton;
QT_END_NAMESPACE
class PlayerWindow : public QWidget
{
    Q_OBJECT

    MyServer * m_Server;
    MyClient * m_Client;

public:
    QString m_Mac;
    explicit PlayerWindow(QWidget *parent = 0);
    QString getMacAddress();

signals:
    void displayFrame(const QtAV::VideoFrame& frame);

public slots:
    void playStream(QTcpSocket *socket);
    void putMac(QString mac);

private:
    QtAV::VideoOutput *m_vo;
    QtAV::AVPlayer *m_player;
    //QtAV::VideoPreviewWidget * widget;
    QtAV::VideoFrame avframe;
    int m_unit;
};

#endif // PLAYERWINDOW_H
