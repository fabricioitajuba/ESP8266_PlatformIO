/*
Simples programa para o entendimento de programação orientada à objeto
Autor: Fabrício Ribeiro
Data: 05/01/2024
*/

#include <Arduino.h>
#include "testeClasse.h"

Barramento_I2C DS1307("DS1307", 0xD0, 6, 5);  //Criação do objeto DS1307 com inicialização
Barramento_I2C DS2404("DS2404",0xA0, 6, 5);   //Criação do objeto DS2404 com inicialização
Barramento_I2C QQUER(0xB0, 4, 3);             //Criação do objeto QQUER com inicialização
Barramento_I2C QQUER1(1, 2);                  //Criação do objeto QQUER1 com inicialização

void setup() {
  
  Serial.begin(115200);

  Serial.print("\n- Dispositivo: ");
  Serial.println(DS1307.getDispositivo());
  Serial.print("- Endereço: ");
  Serial.println(DS1307.getAddress(), HEX);
  Serial.print("- Pino SCL: ");
  Serial.println(DS1307.getSCL());
  Serial.print("- Pino SDA: ");
  Serial.println(DS1307.getSDA());

  Serial.print("\n- Dispositivo: ");
  Serial.println(DS2404.getDispositivo());
  Serial.print("- Endereço: ");
  Serial.println(DS2404.getAddress(), HEX);
  Serial.print("- Pino SCL: ");
  Serial.println(DS2404.getSCL());
  Serial.print("- Pino SDA: ");
  Serial.println(DS2404.getSDA());

  Serial.print("\n- Dispositivo: ");
  Serial.println(QQUER.getDispositivo());
  Serial.print("- Endereço: ");
  Serial.println(QQUER.getAddress(), HEX);
  Serial.print("- Pino SCL: ");
  Serial.println(QQUER.getSCL());
  Serial.print("- Pino SDA: ");
  Serial.println(QQUER.getSDA());

  Serial.print("\n- Dispositivo: ");
  Serial.println(QQUER1.getDispositivo());
  Serial.print("- Endereço: ");
  Serial.println(QQUER1.getAddress(), HEX);
  Serial.print("- Pino SCL: ");
  Serial.println(QQUER1.getSCL());
  Serial.print("- Pino SDA: ");
  Serial.println(QQUER1.getSDA());

}

void loop() {

}