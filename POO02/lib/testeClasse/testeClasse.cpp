#include "testeClasse.h"

//Construtor com parâmetros
Barramento_I2C::Barramento_I2C(String _Dispositivo, byte _Address, int _SCL, int _SDA){
   
    setDispositivo(_Dispositivo);
    setAddress(_Address);
    setSCL(_SCL);
    setSDA(_SDA);
}

//Getters
String Barramento_I2C::getDispositivo(){
    return Dispositivo;
}

uint8 Barramento_I2C::getAddress(){
    return Address;
}

int Barramento_I2C::getSCL(){
    return SCL;
}

int Barramento_I2C::getSDA(){
    return SDA;
}

//Setters
void Barramento_I2C::setDispositivo(String __Dispositivo){
    Dispositivo = __Dispositivo;
}

void Barramento_I2C::setAddress(byte __Address){
    Address = __Address;
}

void Barramento_I2C::setSCL(int __SCL){
    SCL = __SCL;
}

void Barramento_I2C::setSDA(int __SDA){
    SDA = __SDA;
}