#include "myclient.h"

MyClient * MyClient::__instance = NULL;

MyClient * MyClient::get()
{
    if(!__instance)
    {
        __instance = new MyClient();
    }

    return __instance;
}

MyClient::MyClient(QObject *parent) : QObject(parent)
{
    playerConneted = false;
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(connected()),this, SLOT(on_connected()));
    connect(socket, SIGNAL(readyRead()),this, SLOT(on_ready_read()));
    connectToHost();

}

void MyClient::connectToHost()
{
    socket->connectToHost(QHostAddress::LocalHost, 7111);
}

void MyClient::on_ready_read()
{
    //Send the video Stream data to the AVPlayer.
    if(!playerConneted)
    {
        emit playStream(socket);
        playerConneted = true;
    }

}

void MyClient::on_connected()
{
    qDebug() << "Client connected";
}

void MyClient::restoreConnection()
{
    playerConneted = false;
}


/*    QByteArray data = socket->readAll();

    //qDebug() << "Playing";
    avframe = QtAV::VideoFrame(60,60,QtAV::VideoFormat::Format_YUV420P,data);
    avframe.setBits(25);
    avframe.setBytesPerLine(10);
    emit displayFrame(avframe);*/
