#include "ntpthread.h"

NTPThread::NTPThread(QHostAddress address)
{
    m_address = address;
    m_client = new NtpClient();
    connect(m_client, SIGNAL(replyReceived(QHostAddress,quint16,NtpReply)),
            this, SLOT(ntpreplyreceived(QHostAddress,quint16,NtpReply)));
}

void NTPThread::run()
{
    for(;;)
    {
        //qDebug() << "Probing NTP...";
        m_client->sendRequest(m_address, 7010);
        sleep(3);
    }
}

void NTPThread::ntpreplyreceived(const QHostAddress &address, quint16 port, const NtpReply &reply)
{
//    qDebug() << "\n\n---------------NTP--------------\n\n";
//    qDebug() << "reference time:" << reply.referenceTime();
//    qDebug() << "origin time:" << reply.originTime();
//    qDebug() << "\n\n---------------NTP--------------\n\n" ;
}
