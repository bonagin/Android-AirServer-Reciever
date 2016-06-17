#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QtCore>
#include <QtNetwork>
#include <QtAV>

class MyClient : public QObject
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = 0);
    static MyClient * get();
    void connectToHost();

    bool playerConneted;

signals:
    void playStream(QTcpSocket *socket);

public slots:
    void on_connected();
    void on_ready_read();
    void restoreConnection();

signals:
    void displayFrame(const QtAV::VideoFrame& frame);

private:
    QTcpSocket *socket;
    static MyClient * __instance;
    QtAV::VideoFrame avframe;
};

#endif // MYCLIENT_H
