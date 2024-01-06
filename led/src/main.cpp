// main code: ArduinoCode.ino
#include "led.h"

LED led1(2); // create a LED object that attach to pin 2
LED led2(3); // create a LED object that attach to pin 3

void setup() {
  Serial.begin(115200);
}

void loop() {
  led1.turnON();
  led2.turnON();
  Serial.print("LED 1 state: ");
  Serial.println(led1.getState());
  Serial.print("LED 2 state: ");
  Serial.println(led2.getState());

  delay(2000);

  led1.turnOFF();
  led2.turnOFF();
  Serial.print("LED 1 state: ");
  Serial.println(led1.getState());
  Serial.print("LED 2 state: ");
  Serial.println(led2.getState());

  delay(2000);
}