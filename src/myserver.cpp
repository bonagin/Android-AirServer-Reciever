#include "myserver.h"
#include "ntpthread.h"
#include <stdlib.h>
#include <string.h>
#include <QDateTime>
#include <QFile>
#include <QHostInfo>

MyServer * MyServer::__instance = NULL;

MyServer * MyServer::get()
{
    if(!__instance)
    {
        __instance = new MyServer();
    }

    return __instance;
}

MyServer::MyServer(QObject *parent) :
    QObject(parent)
{
    m_Socket = 0;
    frameCnt = 0;
    frameMult = 0;
    socket_ready = false;
    ntpStarted = false;
    socket_connected  = false;
    datadamped = false;

    server = new QTcpServer(this);
    strserver = new QTcpServer(this);

    connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    connect(strserver,SIGNAL(newConnection()),this,SLOT(strnewConnection()));

    //AirServer receiver port.
    if(!server->listen(QHostAddress::Any,7100))
    {
        qDebug() << "AirServer could not start!";
    }
    else
    {
        qDebug() << "AirServer started";
    }

    //Local client to receive screen mirroring streams
    if(!strserver->listen(QHostAddress::Any,7111))
    {
        qDebug() << "Stream Server could not start!";
    }
    else
    {
        qDebug() << "Stream Receiver Server started";
    }

}

void MyServer::strnewConnection()
{
    m_strSocket = strserver->nextPendingConnection();
    qDebug() << "Stream Client Connected";
}

void MyServer::newConnection()
{
    //Connection from iPhone recieved
    QString mac;
    emit getMac(mac);
    QString hostname = tr("%1").arg(QHostInfo::localHostName());

    emit restoreConnection();
    m_Socket = server->nextPendingConnection();
    datadamped = false;
    socket_ready = false;
    socket_connected = false;
    connect(m_Socket, SIGNAL(readyRead()), this, SLOT(Data_received()));

    qDebug() << "Connection from " << m_Socket->peerAddress();

    //Send device parameters.
    QString param = "HTTP/1.1 200 OK\r\n"
                      "Content-Type: text/x-apple-plist+xml\r\n"
                      "Content-Length: 561\r\n\r\n"
                      "<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
                      "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\""
                      "\"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">"
                      "<plist version=\"1.0\">"
                      "<dict>"
                      "<key>deviceid</key>"
                      "<integer>"+ mac +"</integer>"
                      "<key>height</key>"
                      "<integer>1080</integer>"
                      "<key>macAddress</key>"
                      "<integer>"+ mac +"</integer>"
                      "<key>name</key>"
                      "<string>"+ hostname +"</string>"
                      "<key>overscanned</key>"
                      "<false/>"
                      "<key>refreshRate</key>"
                      "<real>0.016667</real>"
                      "<key>version</key>"
                      "<string>220.68</string>"
                      "<key>width</key>"
                      "<integer>1920</integer>"
                      "</dict>"
                      "</plist>";

    QByteArray paramarray = param.toLatin1();
    const char * paramchar = paramarray.data();
    m_Socket->write(paramchar);
    m_Socket->flush();
    m_Socket->waitForBytesWritten(3000);

    //Start NTP client to get timestamp information
    if(!ntpStarted)
    {
        QThread * nthread = new NTPThread(QHostAddress(m_Socket->peerAddress()));
        nthread->start();
        ntpStarted = true;
    }
}

void MyServer::Data_received()
{
    //Received data from iPhone
    frameCnt++;
    frameCnt = frameCnt * frameMult;
    qDebug() << "Frame Count : " << frameCnt;

    //Strip the HTTP headers
    if(!(socket_ready))
    {
        QString data = m_Socket->read(quint64(182));
        if(data.left(4) == "POST")
        {
            qDebug() << data;
            qDebug() << data.length();
            socket_ready = true;
        }
    }
    else if(!socket_connected)
    {
        //Dump Stream parameters
        frameMult = 1;
        if(!datadamped)
        {
            QByteArray dumpdata = m_Socket->read(quint64(262));
            qDebug() << "dumpdata \n" << dumpdata;
            datadamped = true;
        }

        //HTTP headers and stream parameters have been striped, send the frames to the player
        QByteArray data_ =  m_Socket->readAll();
        qDebug() << data_;
        m_strSocket->write(data_);
    }
}
