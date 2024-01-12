// fio.h
#ifndef fio_h
#define fio_h

#include <Arduino.h>

class OUT {
  private:
    int Pin;
    unsigned char pinState;

  public:
    OUT(int pin);
    void ON();
    void OFF();
    int getState();
};

class IN {
  private:
    int Pin;

  public:
    IN(int pin);
    int readPin();
};

#endif