// fio.cpp
#include "fio.h"

//OUTPUT
OUT::OUT(int pin) {
  Pin = pin;
  pinState = LOW;
  pinMode(Pin, OUTPUT);
}

void OUT::ON() {
  pinState = HIGH;
  digitalWrite(Pin, pinState);
}

void OUT::OFF() {
  pinState = LOW;
  digitalWrite(Pin, pinState);
}

int OUT::getState() {
  return pinState;
}

//INPUT
IN::IN(int pin) {
  Pin = pin;
  pinMode(Pin, INPUT);
}

int IN::readPin() {
  return digitalRead(Pin);
}