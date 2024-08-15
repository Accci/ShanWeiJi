#ifndef PROTOCAL_H
#define PROTOCAL_H


//发送命令
const char HOST_TEMPRTRUE_REQ = 0x01;         //主机温度请求
const char HOSTT_TEMPRTRUE_RSP = 0x02;         //主机温度响应
const char WORK_ZHOU_SPEED_REQ = 0x03;        //工作轴转速请求
const char WORK_ZHOU_SPEED_RSP = 0x04;        //工作轴转速响应
const char PRESSURE_CHAMBER_REQ = 0x05;        //工作仓压力请求
const char PRESSURE_CHAMBER_RSP = 0x06;        //工作仓压力响应
const char OIL_VOLUME_REQ = 0x07;             //工作缸油量请求
const char OIL_VOLUME_RSP = 0x08;             //工作缸油量响应
const char ROBOTIC_ARM_PRESSURE_REP = 0x09;   //机械臂压力请求
const char ROBOTIC_ARM_PRESSURE_RSP = 0x0A;   //机械臂压力响应

const char POWER_LEVER_SPPED_REQ = 0x0B;       //动力杆速度请求
const char POWER_LEVER_SPPED_RSP = 0x0C;       //动力杆速度响应


#endif // PROTOCAL_H
