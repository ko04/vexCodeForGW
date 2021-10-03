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
  if(abs(Controller1.Axis4.position())>baseMinSpeed)
  {
    Controller1Axis4Speed = Controller1.Axis4.position();
  }
  else 
  {
    Controller1Axis4Speed = 0;
  }
  baseLeftSpeed = Controller1Axis3Speed + Controller1Axis4Speed/2;
  baseRightSpeed = Controller1Axis3Speed - Controller1Axis4Speed/2;

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
  //后面夹子(小钩子)电机控制
  if(Controller1.ButtonL1.pressing()==1)
  {
    backClaw.setVelocity(backClawSpeed, percent);
    backClaw.spinToPosition(backClawAngle1, degrees,false);
  }
  else if(Controller1.ButtonL2.pressing()==1)
  {
    backClaw.setVelocity(backClawSpeed, percent);
    backClaw.spinToPosition(backClawAngle2, degrees,false);
  }
  else
  {
     backClaw.spin(forward,0,percent);
  }
  //---------------------------------------------------------------
  //前面夹子(铲子控制)电机控制
  if(Controller1.ButtonX.pressing()==1)
  {
    frontClaw.setVelocity(frontClawSpeed, percent);
    frontClaw.spinToPosition(frontClawAngle1, degrees,false); 
  }
  else if(Controller1.ButtonA.pressing()==1)
  {
    frontClaw.setVelocity(frontClawSpeed, percent);
    frontClaw.spinToPosition(frontClawAngle2, degrees,false); 
  }
  else if(Controller1.ButtonB.pressing()==1)
  {
    frontClaw.setVelocity(frontClawSpeed, percent);
    frontClaw.spinToPosition(frontClawAngle3, degrees,false); 
  }
  else
  {
    frontClaw.spin(forward,0,percent);
  }
  //前面的勾子夹住
  if(Controller1.ButtonY.pressing()==1){
    waitUntil(Controller1.ButtonUp.pressing()==0);
    if(fronthookValue==0){
      frontHook.setVelocity(85,percent);
      frontHook.spinToPosition(frontHookAngle2,degrees,false);
      fronthookValue = 1;
    }else{
      frontHook.setVelocity(85,percent);
      frontHook.spinToPosition(frontHookAngle1,degrees,false);
      fronthookValue = 0;
      
    }
  }
}