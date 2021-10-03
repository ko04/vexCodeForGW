#include "variate.h"
void motorsInit()
{  
  if(motorInitState == 0)
  {
    baseLeft.resetPosition();
    baseRight.resetPosition();
    gatherRings.resetPosition();
    Claw.resetPosition();

    Claw.setStopping(hold);

    motorInitState = 1;
  }
}
void baseGoForward(float aimDistance,float motorSpeed,int stateValue=1)
{
  baseLeft.setVelocity(motorSpeed, percent);
  baseRight.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    baseLeft.spinFor(forward,aimDistance,degrees,false);
    baseRight.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    baseLeft.spinFor(forward,aimDistance,degrees,false);
    baseRight.spinFor(forward,aimDistance,degrees,false);
  } 
}
void baseGoBackward(float aimDistance,float motorSpeed,int stateValue=1)
{
  baseLeft.setVelocity(motorSpeed, percent);
  baseRight.setVelocity(motorSpeed, percent);
  aimDistance = -aimDistance;
  if(stateValue == 1)
  {
    baseLeft.spinFor(forward,aimDistance,degrees,false);
    baseRight.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    baseLeft.spinFor(forward,aimDistance,degrees,false);
    baseRight.spinFor(forward,aimDistance,degrees,false);
  } 
}
void baseTurnLeft(float aimDistance,float motorSpeed,int stateValue=1)
{
  baseLeft.setVelocity(motorSpeed, percent);
  baseRight.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    baseLeft.spinFor(forward,-aimDistance,degrees,false);
    baseRight.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    baseLeft.spinFor(forward,-aimDistance,degrees,false);
    baseRight.spinFor(forward,aimDistance,degrees,false);
  } 
}
void baseTurnRight(float aimDistance,float motorSpeed,int stateValue=1)
{
  baseLeft.setVelocity(motorSpeed, percent);
  baseRight.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    baseLeft.spinFor(forward,aimDistance,degrees,false);
    baseRight.spinFor(forward,-aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    baseLeft.spinFor(forward,aimDistance,degrees,false);
    baseRight.spinFor(forward,-aimDistance,degrees,false);
  } 
}
void gatherRingsUp(float aimDistance,float motorSpeed,int stateValue=1)
{
  gatherRings.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    gatherRings.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    gatherRings.spinFor(forward,aimDistance,degrees,false);
  } 
}
void gatherRingsDown(float aimDistance,float motorSpeed,int stateValue=1)
{
  aimDistance = -aimDistance;
  gatherRings.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    gatherRings.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    gatherRings.spinFor(forward,aimDistance,degrees,false);
  } 
}
void ClawAngle(float aimDistance,float motorSpeed,int stateValue=1)
{
  Claw.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    Claw.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    Claw.spinFor(forward,aimDistance,degrees,false);
  } 
}
void shootRingsAngle(float aimDistance,float motorSpeed,int stateValue=1)
{
  shootRings.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    shootRings.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    shootRings.spinFor(forward,aimDistance,degrees,false);
  } 
}
void liftingAngle(float aimDistance,float motorSpeed,int stateValue=1)
{
  lifting.setVelocity(motorSpeed, percent);
  if(stateValue == 1)
  {
    lifting.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    lifting.spinFor(forward,aimDistance,degrees,false);
  } 
}