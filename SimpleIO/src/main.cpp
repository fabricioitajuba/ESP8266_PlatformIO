/*
Simples IO
Autor: Fabrício Ribeiro
12/01/2024
*/

#include "fio.h"

IN IN0(13);
IN IN1(12);
IN IN2(14);
IN IN3(16);
IN IN4(1);
OUT OUT5(3);
OUT OUT6(5);
OUT OUT7(4);
OUT OUT8(0);
OUT OUT9(2);

void setup() {

  OUT5.ON();
  OUT6.ON();
  OUT7.ON();
  OUT8.ON();
  OUT9.ON();

}

void loop() {

  //IN0 read
  if(!IN0.readPin())
    OUT5.OFF();
  else
    OUT5.ON();

  //IN1 read
  if(!IN1.readPin())
    OUT6.OFF();
  else
    OUT6.ON();

  //IN2 read
  if(!IN2.readPin())
    OUT7.OFF();
  else
    OUT7.ON();

  //IN3 read
  if(!IN3.readPin())
    OUT8.OFF();
  else
    OUT8.ON();

  //IN4 read
  if(!IN4.readPin())
    OUT9.OFF();
  else
    OUT9.ON();                
    
}