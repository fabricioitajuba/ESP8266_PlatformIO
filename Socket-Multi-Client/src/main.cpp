#include <Arduino.h>
//#include <WiFi.h>
#include <ESP8266WiFi.h>
#include <RemoteClient.h> //Faz parte da nossa lib

//Configurações da rede e porta do socket do outro ESP
//Devem ser iguais nos dois arquivos
#define SSID "ESP8266Server"
#define PASSWORD "87654321"
#define SERVER_PORT 5000

//Quantidade de pinos cujo os estados serão verificados
#define PIN_COUNT 2
//Array com os pinos que iremos verificar
int pinNumbers[PIN_COUNT] = {23, 22};

//Objeto que verificará se os pinos mudaram de estado e enviará para o server
RemoteClient remoteClient(pinNumbers, PIN_COUNT);

void connectWiFi()
{
    Serial.print("Connecting to " + String(SSID));
    //Conectamos ao Access Point criado pelo outro ESP
    WiFi.begin(SSID, PASSWORD);

    //Esperamos conectar
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(500);
    }

    Serial.println();
    Serial.println("Connected!");
}

void setup()
{
    Serial.begin(115200);
    //Conecta à rede criada pelo outro ESP
    connectWiFi();
    remoteClient.setServerAddressAndPort(WiFi.gatewayIP(), SERVER_PORT);
}

void loop()
{ 
    //Se não está conectado à rede WiFi
    if(WiFi.status() != WL_CONNECTED)
    {
        //Mandamos conectar
        connectWiFi();
    }

    //Chama o método loop do remoteClient e este verificará se aconteceu mudança no estado dos pinos
    //e enviará para o server caso tenha acontecido
    remoteClient.loop();
}
