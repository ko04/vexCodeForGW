#include "vex.h"

//遥控器轴变量
float Controller1Axis3Speed = 0;
float Controller1Axis4Speed = 0;
//电机速度变量
float baseMinSpeed = 5;
float baseLeftSpeed = 0;
float baseRightSpeed = 0;
float frontClawSpeed = 100;
float backClawSpeed = 100;
float gatherRingsSpeed = 0;
//前爪电机角度变量
float frontClawAngle1 = 0;
float frontClawAngle2  = 290;
float frontClawAngle3  = 658;
//后爪电机角度变量
float backClawAngle1 = 0;
float backClawAngle2 = 250;
//初始化状态
float motorInitState = 0;
//自动用的awp线的角度
float awpLineAngle = 320;
