#include "functions.h"
void autoControl()
{

  //initate all the variable
  //Inertial5.calibrate(); 
  gatherRings.setVelocity(90,percent);
  frontClaw.setVelocity(100,percent);
  baseLeft.setVelocity(100,percent);
  baseRight.setVelocity(100,percent);
  frontHook.setVelocity(90,percent);
  
  //go to the first mobile goal at the same time put down front claw
  frontClaw.spinFor(frontClawAngle3,degrees,false);
  baseLeft.spinFor(1650,degrees, false);
  baseRight.spinFor(1650,degrees,true);
  frontHook.spinToPosition(frontHookAngle2,degrees,true);

  //frontClaw.spinFor(-frontClawAngle2,degrees,true);
  //go back the team mobile goal
  baseLeft.setVelocity(80,percent);
  baseRight.setVelocity(80,percent);
  //frontHook.spinToPosition(frontHookAngle2,degrees,false);
  frontClaw.spinFor(-frontClawAngle2,degrees,false);
  baseLeft.spinFor(-1350,degrees,false);
  baseRight.spinFor(-1350,degrees,true);
  //turing in order to face to the team mobile goal
  /*
  while(Inertial5.heading(degrees)<=380||Inertial5.heading(degrees)>=445){
    baseLeft.spin(reverse);
    wait(0.1,seconds);

  */
  wait(0.2,seconds);
  baseTurnLeft(225,100);
  //goes down the rings
  Brain.Timer.reset();
  while(true){
    //baseRight.spinFor(-200,degrees,false);
    //baseLeft.spinFor(-200,degrees,true);
    baseRight.spin(reverse);
    baseLeft.spin(reverse);
    if(Brain.Timer.value()>1.8){
      baseLeft.stop();
      baseRight.stop();
      break;
    }
  }
  

  //wait(0.2,seconds);
  //Brain.Timer.reset();
  backClaw.spinToPosition(backClawAngle2,degrees,false);
  
  gatherRings.spinFor(3000,degrees,true);
  
  //baseTurnLeft(175,100);
  //baseLeft.spinFor(500,degrees,false);
  //baseRight.spinFor(500,degrees,true);
  //baseLeft.stop();
  //baseRight.stop();
  
  /*
  baseRight.spinFor(50,degrees,false);
  baseLeft.spinFor(50,degrees,true);
  baseRight.spinFor(-150,degrees,false);
  baseLeft.spinFor(-150,degrees,true);
  
  wait(0.03,seconds);
  if(!baseRight.isDone()){
    backClawAngle(backClawAngle2,100);
      if(!backClaw.isDone()){
        gatherRingsDown(2500,80);
      }
  }
  */
  
  
  //gatherRingsDown(2500,80);

  

  /*
  while(1){
    double rotatenum = Inertial5.heading(degrees);
    //用惯性传感器来执行转向的动作
    //先拿到中立区的一个mobile goal，然后再转向，用屁股移除awp线上的联队mobile goal
    if(rotatenum>=awpLineAngle-20&&rotatenum<=awpLineAngle+20){
      break;
    }
    baseTurnLeft(150,70);
    wait (0.01,seconds);
  }
  baseGoBackward(500,100);
  backClawAngle(backClawAngle2,100);
  baseTurnRight(150,100);
  baseGoBackward(200,100);
  */



  
}


