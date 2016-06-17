#include "playerwindow.h"
#include <QPushButton>
#include <QSlider>
#include <QLayout>
#include <QMessageBox>
#include <QFileDialog>
#include "bonjourserviceregister.h"

using namespace QtAV;

PlayerWindow::PlayerWindow(QWidget *parent) : QWidget(parent)
{
    m_Mac = getMacAddress();
    BonjourServiceRegister * bonjourRegister = new BonjourServiceRegister(this);
    bonjourRegister->registerService(BonjourRecord(tr("%1").arg(QHostInfo::localHostName()),
                                                   QLatin1String("_airplay._tcp"), "local: " +
                                                   tr("deviceid=%1").arg(m_Mac) +
                                                   "flags=0.4"+
                                                   "features=0x39f7" +
                                                   "model=AppleTV5.3" +
                                                   "srcvers=220.68"),
                                                   quint64(7100));

    m_Server = MyServer::get();
    m_Client = MyClient::get();

    connect(m_Server, SIGNAL(getMac(QString)), this, SLOT(putMac(QString)));
    connect(m_Server, SIGNAL(restoreConnection()), m_Client, SLOT(restoreConnection()));
    connect(m_Client, SIGNAL(playStream(QTcpSocket*)), this, SLOT(playStream(QTcpSocket*)));

    setWindowTitle(QString::fromLatin1("AirServer"));
    m_player = new AVPlayer(this);

    //widget = new VideoPreviewWidget();
    //connect(this, SIGNAL(displayFrame(QtAV::VideoFrame)), widget, SLOT(displayFrame(QtAV::VideoFrame)));
    QVBoxLayout *vl = new QVBoxLayout();
    setLayout(vl);

    m_vo = new VideoOutput(this);
    if (!m_vo->widget()) {
        QMessageBox::warning(0, QString::fromLatin1("QtAV error"), tr("Can not create video renderer"));
        return;
    }

    m_player->setRenderer(m_vo);
    vl->addWidget(m_vo->widget());
}


void PlayerWindow::playStream(QTcpSocket *socket)
{
    QVariantHash avfm_opt;
    avfm_opt["probesize"] = 512*1024;
    avfm_opt["fbsprobesize"] = 25;
    avfm_opt["codec"] = "h264";
    avfm_opt["rtbufsize"] = 512*1024;

    QVariantHash opt;
    opt["avformat"] = avfm_opt;
    m_player->setOptionsForFormat(opt);

//    qDebug() << "Playing";
    m_player->setFrameRate(25);
    m_player->setBufferMode(BufferPackets);
    m_player->setBufferValue(16);
    m_player->setIODevice(socket);
    m_player->play();
}

void PlayerWindow::putMac(QString mac)
{
    mac = m_Mac;
}

QString PlayerWindow::getMacAddress()
{
    foreach(QNetworkInterface netInterface, QNetworkInterface::allInterfaces())
    {
        // Return only the first non-loopback MAC Address
        if (!(netInterface.flags() & QNetworkInterface::IsLoopBack))
            return netInterface.hardwareAddress();
    }
    return QString();
}



























//    qDebug() << "Playing";
//    avframe = VideoFrame(60,60,VideoFormat::Format_YUV420P,data);
//    //emit displayFrame(avframe);

//    m_player->setBufferMode(QtAV::BufferMode::BufferPackets);
//    m_player->setBufferValue(1);
//    QVariantHash avfm_opt;
//    avfm_opt["probesize"] = 256*1024;
//    avfm_opt["analyzeduration"] = 640 * 1024 ;
//    avfm_opt["framerate"] = 100;
//    m_player->setOptionsForFormat(avfm_opt);

//    QVariantHash avfm_opt;
//    avfm_opt["probesize"] = 512*1024;
//    avfm_opt["fbsprobesize"] = 30;
//    avfm_opt["framerate"] = 25;
//    avfm_opt["codecName"]  = "libstagefright_h264";
//    avfm_opt["rtbufsize"] = 512*1024;

//    QVariantHash opt;
//    opt["avformat"] = avfm_opt;
//    m_player->setOptionsForFormat(opt);

