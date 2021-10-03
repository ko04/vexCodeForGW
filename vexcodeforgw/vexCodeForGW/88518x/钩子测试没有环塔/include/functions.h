#include "variate.h"
void motorsInit()
{  
  if(motorInitState == 0)
  {
    baseLeft.resetPosition();
    //baseLeft.setVelocity(80,percent);
    
    baseRight.resetPosition();
    //baseRight.setVelocity(80,percent);
    gatherRings.resetPosition();
    frontClaw.resetPosition();
    backClaw.resetPosition();

    backClaw.setStopping(hold);
    frontClaw.setStopping(hold); 
    Inertial5.calibrate(); 
    motorInitState = 1;
  }
}
void baseGoForward(float aimDistance,float motorSpeed,int stateValue=1)
{
  if(stateValue == 1)
  {
    baseLeft.setVelocity(motorSpeed,percent);
    baseRight.setVelocity(motorSpeed,percent);
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
  gatherRings.setVelocity(motorSpeed,percent);
  if(stateValue == 1)
  {
    //gatherRings.setVelocity(20,percent);//
    gatherRings.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    //gatherRings.setVelocity(20,percent);//
    gatherRings.spinFor(forward,aimDistance,degrees,false);
  } 
}
void gatherRingsDown(float aimDistance,float motorSpeed,int stateValue=1)
{
  gatherRings.setVelocity(motorSpeed,percent);
  aimDistance = -aimDistance;
  if(stateValue == 1)
  {
    //gatherRings.setVelocity(20,percent);//
    gatherRings.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    //gatherRings.setVelocity(20,percent);//
    gatherRings.spinFor(forward,aimDistance,degrees,false);
  } 
}
void frontClawAngle(float aimDistance,float motorSpeed,int stateValue=1)
{
  if(stateValue == 1)
  {
    frontClaw.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    frontClaw.spinFor(forward,aimDistance,degrees,false);
  } 
}
void backClawAngle(float aimDistance,float motorSpeed,int stateValue=1)
{
  if(stateValue == 1)
  {
    backClaw.spinFor(forward,aimDistance,degrees,true);
  }
  else if(stateValue == 0)
  {
    backClaw.spinFor(forward,aimDistance,degrees,false);
  } 
}
void frontHookcatch(int stateValue = 1){
  if(stateValue ==1){
    frontHook.spinFor(frontHookAngle2,degrees,true);
  }else{
    frontHook.spinFor(frontHookAngle2,degrees,false);
  }
}
void frontHookLoose(int stateValue = 1){
  if(stateValue == 1){
    frontHook.spinFor(-frontHookAngle2,degrees,true);
  }else{
    frontHook.spinFor(-frontHookAngle2,degrees,false);
  }
}