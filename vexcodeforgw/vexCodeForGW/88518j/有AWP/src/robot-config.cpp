#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
// 电机端口设置
// 电机 电机名字 = 电机（端口，电机齿轮箱传动比，正反转）
motor baseLeftMotorA = motor(PORT3, ratio18_1, true);//底盘左前电机
motor baseLeftMotorB = motor(PORT2, ratio18_1, true);//底盘左后电机
motor baseRightMotorA = motor(PORT9, ratio18_1, false);//底盘右前电机
motor baseRightMotorB = motor(PORT4, ratio18_1, false);//底盘右后电机
motor Claw = motor(PORT11, ratio36_1, true);//前面环塔铲子电机
motor gatherRings = motor(PORT20, ratio18_1, true);//收集曲环电机
motor shootRings = motor(PORT19, ratio18_1, true);//投掷曲环电机
motor lifting = motor(PORT10,ratio36_1,false);//抬升电机
motor_group baseLeft = motor_group(baseLeftMotorA, baseLeftMotorB);
motor_group baseRight = motor_group(baseRightMotorA, baseRightMotorB);
motor backClaw = motor(PORT6, ratio36_1, false);
controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}