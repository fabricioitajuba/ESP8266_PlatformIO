#ifndef testeClasse_h
#define testeClasse_h

#include <Arduino.h>

//Classe Car
class Car{ 
  
  public:                           // Especificador de acesso
    Car(String x, String y, int z); //Construtor com parâmetros
    
    String fabricante;              // Attributo
    String modelo;                  // Attributo
    int ano;                        // Attributo

    void nome_programa();           //Método sem inicialização e retorno
    int soma(int a, int b);         //Método com inicialização e retorno
    int soma(int a, int b, int c);  //Sobrecarga de método com inicialização e retorno

  private:

 };

#endif