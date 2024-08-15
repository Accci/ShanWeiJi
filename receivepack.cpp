#include "receivepack.h"
#include <QDebug>

ReceivePack::ReceivePack(QSerialPort* port):serialport(port)
{
}

void ReceivePack::run()
{
    unsigned char pack[9];
    char cmd;
    char param;
    int data;
    while(1)
    {
        serialport->waitForReadyRead(10);
        int ret = serialport->bytesAvailable();
        if(ret == 0) continue;

        ret = serialport->read((char *)pack, sizeof (pack));
        qDebug() << "read" << ret <<" byte:";
        qDebug() << pack[1] <<" " << pack[2] <<" "<< pack[3] <<" " << pack[4] <<" "<< pack[5] <<" " << pack[6] <<" "<< pack[7] <<" " << pack[8] ;

        if(parsePack(pack, sizeof(pack), &cmd, &param, &data))
        {
            qDebug() <<" parse succees !";
            emit receiveResponsePack(cmd, param, data);
        }else{
            qDebug() <<"收到非法包";
        }

    }
}

bool ReceivePack::parsePack(unsigned char pack[], int size, char *cmd, char *param, int *data)
{
    if(!pack || size < 9) return false;

    if(pack[0] == 0xEF && pack[8] == 0xFE)
    {
        int count = 0;
        for(int i = 1; i <= 7; ++i)
        {
            int tmp = pack[i];
            for(int k = 0; k < 8; ++k)
            {
                if(tmp & 1) count++;
                tmp >>= 1;
            }
        }

        if(count % 2)
            return false;

        *cmd = pack[1];
        *param = pack[2];
        *data = pack[3] | (pack[4] << 8) | (pack[5] << 16) | (pack[6] << 24);
        qDebug() << "data:" << *data;
        return true;
    }

    return false;
}
