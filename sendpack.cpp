#include "sendpack.h"

SendPack::SendPack(QSerialPort* port):serialport(port)
{

}

void SendPack::run()
{
    //发包
    unsigned char cmdAndParam[][2] = {
        {HOST_TEMPRTRUE_REQ, 0},
        {WORK_ZHOU_SPEED_REQ, 1},
        {WORK_ZHOU_SPEED_REQ, 2},
        {OIL_VOLUME_REQ, 1},
        {OIL_VOLUME_REQ, 2},
        {OIL_VOLUME_REQ, 3},
        {PRESSURE_CHAMBER_REQ, 1},
        {PRESSURE_CHAMBER_REQ, 2},
        {PRESSURE_CHAMBER_REQ, 3},
        {PRESSURE_CHAMBER_REQ, 4},
        {PRESSURE_CHAMBER_REQ, 5},
        {ROBOTIC_ARM_PRESSURE_REP, 0},

    };
    int cmdCount = sizeof(cmdAndParam) / sizeof(cmdAndParam[0]);

    char pack[9];
    char data[4] = {0};
    while(1)
    {

        for(int i = 0; i< cmdCount; ++i)
        {
            makePack(cmdAndParam[i][0], cmdAndParam[i][1], data, pack);
            serialport->write(pack, sizeof (pack));
            serialport->waitForBytesWritten(100);
            QThread::msleep(2000);
        }
    }
}

bool SendPack::makePack(char cmd, char param, char data[], char *pack)
{
    if(!pack) return false;

    pack[0] = 0xEF;
    pack[1] = cmd;

    pack[2] = param;

    pack[3] = data[0];
    pack[4] = data[1];
    pack[5] = data[2];
    pack[6] = data[3];

    //奇偶校验
    int count = 0;
    for(int i = 1; i <= 6; ++i)
    {
        char byte = pack[i];
        for(int k = 0; k < 8; ++k)
        {
            if(byte & 1) count++;
            byte >>= 1;
        }
    }

    if(count & 1)
    {
        pack[7] = 1;
    }
    else
    {
        pack[7] = 0;
    }

    pack[8] = 0xFE;
    return true;


}

