#ifndef NTPTHREAD_H
#define NTPTHREAD_H

#include <QObject>
#include <QThread>
#include <QHostAddress>

#include "NtpClient.h"
#include "NtpReply.h"

class NTPThread : public QThread
{
    Q_OBJECT

public:
    NTPThread(QHostAddress address);
    QHostAddress m_address;
    void run();

    NtpClient * m_client;

public slots:
    void ntpreplyreceived(const QHostAddress &address, quint16 port, const NtpReply &reply);
};

#endif // NTPTHREAD_H
