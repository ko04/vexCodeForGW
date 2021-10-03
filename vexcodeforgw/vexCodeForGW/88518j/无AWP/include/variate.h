#include "vex.h"
//电机初始化状态
float motorInitState = 0;
//遥控器轴变量
float Controller1Axis1Speed = 0;
float Controller1Axis3Speed = 0;
//电机速度变量
float baseMinSpeed = 5;
float baseLeftSpeed = 0;
float baseRightSpeed = 0;
float frontClawSpeed = 100;
float backClawSpeed = 100;
float gatherRingsSpeed = 0;
//环塔钩子电机角度变量
float ClawAngle1 = 0;
float ClawAngle2 = 250;
//投掷曲环电机角度变量
float shootRingsAngle1 = 0;
float shootRingsAngle2 = 200;

