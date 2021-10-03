#include "functions.h"
void autoControl()
{
  motorsInit();
  baseLeft.setVelocity(85,percent);
  baseRight.setVelocity(85,percent);
  frontClaw.setVelocity(100,percent);
  backClaw.setVelocity(100,percent);
  gatherRings.setVelocity(100,percent);
  frontHook.setVelocity(90,percent);
  
  baseLeft.spinFor(forward,1400,degrees,false);
  baseRight.spinFor(forward,1400,degrees,false);
  frontClaw.spinFor(frontClawAngle3,degrees,true);
  wait(0.5,seconds);
  frontClaw.spinFor(-frontClawAngle2,degrees,true);

  //baseTurnLeft(90,100);
  Brain.Timer.reset();
  /*
  while(true){
    //baseRight.spinFor(-200,degrees,false);
    //baseLeft.spinFor(-200,degrees,true);
    baseRight.spin(reverse);
    baseLeft.spin(reverse);
    if(Brain.Timer.value()>2){
      baseLeft.stop();
      baseRight.stop();
      break;
    }
  }
  */
  baseLeft.spinFor(-800,degrees,false);
  baseRight.spinFor(-800,degrees,true);
  baseTurnLeft(250,100);
  while(true){
    //baseRight.spinFor(-200,degrees,false);
    //baseLeft.spinFor(-200,degrees,true);
    baseRight.spin(reverse);
    baseLeft.spin(reverse);
    if(Brain.Timer.value()>2.5){
      baseLeft.stop();
      baseRight.stop();
      break;
    }
  }
  backClaw.spinToPosition(backClawAngle2,degrees);
  
  //baseTurnRight(100,100);
  baseTurnLeft(90,100);
  baseLeft.spinFor(500,degrees,false);
  baseRight.spinFor(500,degrees,true);
  
  /*
  while(true){
    //baseRight.spinFor(-200,degrees,false);
    //baseLeft.spinFor(-200,degrees,true);
    baseRight.spin(reverse);
    baseLeft.spin(reverse);
    if(Brain.Timer.value()>2){
      baseLeft.stop();
      baseRight.stop();
      break;
    }
  }
  */
  gatherRings.spin(forward);

}


