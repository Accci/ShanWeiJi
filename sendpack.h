#ifndef SENDPACK_H
#define SENDPACK_H

#include <QObject>
#include <QThread>
#include <QSerialPort>
#include "protocal.h"

class SendPack : public QThread
{
    Q_OBJECT
public:
    SendPack(QSerialPort* port);
    void run()override;
     bool makePack(char cmd, char param, char data[], char *pack);
private:
    QSerialPort *serialport;
};

#endif // SENDPACK_H
