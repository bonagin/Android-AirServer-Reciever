#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>
#include <QtAV>



class MyServer : public QObject
{
    Q_OBJECT

    QTcpSocket *m_Socket;
    QTcpSocket *m_strSocket;
    bool socket_ready;
    bool socket_connected;
    int frameCnt;
    int frameMult;
    bool datadamped;
    bool ntpStarted;


public:
    explicit MyServer(QObject *parent = 0);
    static MyServer * get();

public slots:
    void newConnection();
    void strnewConnection();
    void Data_received();

signals:
    void restoreConnection();
    void getMac(QString mac);

private:
    QTcpServer *server;
    QTcpServer *strserver;
    static MyServer * __instance;
    QtAV::VideoFrame frame;
};

#endif // MYSERVER_H
