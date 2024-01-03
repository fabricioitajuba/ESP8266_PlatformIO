/*
Simples programa para o entendimento de programação orientada à objeto
Autor: Fabrício Ribeiro
Data: 02/01/2024
*/

#include <Arduino.h>
#include "testeClasse.h"

Car carro1("BMW", "X5", 1999);          //Criação do objeto carro1 com inicialização
Car carro2("Chevrolet", "Corça", 2007); //Criação do objeto carro2 com inicialização

void setup() {
  Serial.begin(115200);

  carro1.nome_programa();

  Serial.println("\nCarro 1");
  Serial.println(carro1.fabricante);
  Serial.println(carro1.modelo);
  Serial.println(carro1.ano);

  Serial.println("\nCarro 2");
  Serial.println(carro2.fabricante);
  Serial.println(carro2.modelo);
  Serial.println(carro2.ano);

  Serial.print("\nO valor da soma de 2 números é = ");
  Serial.println(carro1.soma(1, 2));

  Serial.print("\nO valor da soma de 3 números é = ");
  Serial.println(carro1.soma(1, 2, 3));
}

void loop() {

}
