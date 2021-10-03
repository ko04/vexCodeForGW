using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor_group baseLeft;
extern motor_group baseRight;
extern motor frontClaw;
extern motor Claw;
extern motor gatherRings;
extern motor shootRings;
extern motor lifting;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );