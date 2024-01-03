#include <Arduino.h>
//#include <WiFi.h>
#include <ESP8266WiFi.h>
#include "RemoteServer.h" //Faz parte da nossa lib

//Configurações da rede e porta do socket criados por este ESP
//Devem ser iguais nos dois arquivos
#define SSID "ESP8266Server"
#define PASSWORD "87654321"
#define SERVER_PORT 5000

//Objeto que irá receber por socket informações sobre mudança no estado dos pinos dos ESPs clients
RemoteServer remoteServer(SERVER_PORT);

void createWiFiAP()
{
    Serial.println("Creating AP " + String(SSID) + "...");
    //Coloca este ESP como Access Point
    WiFi.mode(WIFI_AP);
    //SSID e Senha para se conectarem a este ESP
    WiFi.softAP(SSID, PASSWORD);
    Serial.println("Created");
}

//Função chamada toda vez que um pino em um dos clients mudar de estado
void statusChange(int pinNumber, int pinStatus)
{
    //Aqui vamos apenas replicar o estado no mesmo pino deste ESP
    //Colocamos o pino como saída
    pinMode(pinNumber, OUTPUT);
    //E mudamos o estado para o mesmo que recebemos do client
    digitalWrite(pinNumber, pinStatus);
}

void setup()
{
    Serial.begin(115200);

    //Cria uma rede WiFi para os outros ESPs se conectarem
    createWiFiAP();

    //Inicia o remoteServer para que ele possa receber conexões
    remoteServer.begin();

    //Passamos a função que será nosso callback quando um pino de um dos clients mudar de estado
    remoteServer.onStatusChange(statusChange);
}

void loop()
{
    //Chama a função do remoteServer que irá verificar novas conexões
    //e ler os dados dos pinos que os clients enviam quando há mudança de estado
    remoteServer.loop();
}