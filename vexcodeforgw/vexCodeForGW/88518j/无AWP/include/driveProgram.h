#include "autoProgram.h"
void driveControl()
{
  //---------------------------------------------------------------
  //底盘电机控制
  if(abs(Controller1.Axis3.position())>baseMinSpeed)
  {
    Controller1Axis3Speed = Controller1.Axis3.position();
  }
  else 
  {
    Controller1Axis3Speed = 0;
  }
  if(abs(Controller1.Axis1.position())>baseMinSpeed)
  {
    Controller1Axis1Speed = Controller1.Axis1.position();
  }
  else 
  {
    Controller1Axis1Speed = 0;
  }

  baseLeftSpeed = Controller1Axis3Speed + Controller1Axis1Speed/2;
  baseRightSpeed = Controller1Axis3Speed - Controller1Axis1Speed/2;


  baseLeft.spin(forward,baseLeftSpeed,percent);
  baseRight.spin(forward,baseRightSpeed,percent);
  //---------------------------------------------------------------
  //收集曲环电机控制
  if(Controller1.ButtonR1.pressing() ==1)
  {
    gatherRingsSpeed = 100;
  }
  else if(Controller1.ButtonR2.pressing()==1)
  {
    gatherRingsSpeed = -100;
  }
  else
  {
    gatherRingsSpeed = 0;
  }
  gatherRings.spin(forward,gatherRingsSpeed,percent);
  //---------------------------------------------------------------
  //环塔钩子电机控制
  if(Controller1.ButtonL1.pressing()==1)
  {
    Claw.setVelocity(backClawSpeed, percent);
    Claw.spinToPosition(ClawAngle1, degrees,false);
  }
  else if(Controller1.ButtonL2.pressing()==1)
  {
    Claw.setVelocity(backClawSpeed, percent);
    Claw.spinToPosition(ClawAngle2, degrees,false);
  }
  else
  {
     Claw.spin(forward,0,percent);
  }
  //---------------------------------------------------------------
  //抬升电机控制
  if(abs(Controller1.Axis2.position())>5)
  {
    lifting.spin(forward,Controller1.Axis2.position(),percent);
  }
  else
  {
    lifting.spin(forward,0,percent);
  }
  lifting.setStopping(brake);
  //---------------------------------------------------------------
  //投掷电机控制
  if(Controller1.ButtonB.pressing()==1)
  {
    shootRings.setVelocity(100,percent);
    shootRings.spinToPosition(225,degrees,false); 
  }
  else if(Controller1.ButtonA.pressing()==1)
  {
    shootRings.setVelocity(100,percent);
    shootRings.spinToPosition(-225,degrees,false); 
  }
  else
  {
    shootRings.spin(forward,0,percent);
  }
  shootRings.setStopping(brake);
}