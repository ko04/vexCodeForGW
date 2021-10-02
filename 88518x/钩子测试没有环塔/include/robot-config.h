using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor_group baseLeft;
extern motor_group baseRight;
extern motor frontClaw;
extern motor backClaw;
extern motor gatherRings;
extern controller Controller1;
extern inertial Inertial5;
extern motor frontHook;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );