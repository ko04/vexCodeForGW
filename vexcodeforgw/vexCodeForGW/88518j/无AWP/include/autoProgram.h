#include "functions.h"
void autoControl()
{
  // baseGoForward(1422,25,1);
  // baseGoBackward(150,100,1);
  // gatherRingsUp(550,100,1);
  // ClawAngle(100,100,1);
  // baseTurnRight(236.6,20,1);
  // liftingAngle(100,100,1);
  //shootRingsAngle(100,100,1);

//右route1------------------------------------
  baseGoForward(1200,100,1);
  baseGoForward(240, 70);
  liftingAngle(-70,55,0);
  ClawAngle(100,150,0);
  wait(10, msec);
  baseGoBackward(1000,83,1);
  ClawAngle(-200,100,0);
  liftingAngle(-70,55,0);

  //拿中立环塔
  baseGoBackward(437,83,1);
  wait(50,msec);
  baseTurnRight(153,30,1);
  wait(50,msec);
  baseGoForward(590,30,1);
  //ClawAngle(80,100,0);
  wait(50,msec);
  shootRingsAngle(250,100,0);
  wait(1,seconds);
  shootRingsAngle(-250,100,0);
  wait(1,seconds);
  baseGoBackward(100, 20);
  //移除AWP线+预装
  //右边

  //左route1-------------------------------

  //放在泡沫垫十字左边的第3，7个位置

  // baseGoForward(1320,93,1);
  // wait(30,msec);
  // baseGoForward(200,40,1);
  // liftingAngle(-70,55,0);
  // ClawAngle(100,150,0);
  // //抓住前方的中立环塔

  // wait(5, msec);
  // baseGoBackward(1000,83,1);
  // ClawAngle(-200,100,0);
  // liftingAngle(-70,55,0);
  // baseGoBackward(540,83,1);
  // //放下环塔

  // wait(30,msec);
  // baseTurnRight(330,70,1);
  // baseGoForward(267,50,1);
  // wait(50,msec);
  // //转方向使机器朝向

  // ClawAngle(150,100,0);
  // ClawAngle(-150,100,0);
  // shootRingsAngle(200,60,1);
  // wait(400,msec);
  // shootRingsAngle(-200,60,0);
  // // 👈
}