#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor baseLeftMotorA = motor(PORT20, ratio18_1, true);
motor baseLeftMotorB = motor(PORT10, ratio18_1, true);
motor_group baseLeft = motor_group(baseLeftMotorA, baseLeftMotorB);
motor baseRightMotorA = motor(PORT11, ratio18_1, false);
motor baseRightMotorB = motor(PORT1, ratio18_1, false);
motor_group baseRight = motor_group(baseRightMotorA, baseRightMotorB);
motor frontClaw = motor(PORT9, ratio36_1, false);
motor backClaw = motor(PORT8, ratio36_1, false);
motor gatherRings = motor(PORT12, ratio18_1, false);
controller Controller1 = controller(primary);
inertial Inertial5 = inertial(PORT5);
motor frontHook = motor(PORT13, ratio36_1, false);

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