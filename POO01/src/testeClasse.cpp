#include "testeClasse.h"

//Construtor com parâmetros
Car::Car(String x, String y, int z){

    fabricante = x;
    modelo = y;
    ano = z;
}

void Car::nome_programa(){
    Serial.println("\nPrograma classes");
}

int Car::soma(int a, int b){
    return a+b;
}

int Car::soma(int a, int b, int c){
    return a+b+c;
}