#ifndef testeClasse_h
#define testeClasse_h

#include <Arduino.h>

//Classe Barramento_I2C
class Barramento_I2C{ 
  
  public: // Especificador de acesso público
    Barramento_I2C(String _Dispositivo, byte _Address, int _SCL, int _SDA); //Método construtor com parâmetros

    String getDispositivo(); //Método getDispositivo 
    uint8 getAddress(); //Método getAddress
    int getSCL();       //Método getSCL
    int getSDA();       //Método getSDA

  private:
    String Dispositivo; //Parâmetro privado
    uint8 Address;  //Parâmetro privado
    int SCL, SDA;   //Parâmetro privado

    void setDispositivo(String __Dispositivo); //Método setAddress (encapsulamento)
    void setAddress(byte __Address); //Método setAddress (encapsulamento)
    void setSCL(int __SCL); //Método setSCL (encapsulamento)
    void setSDA(int __SDA); //Método setSDA (encapsulamento)
 };

#endif