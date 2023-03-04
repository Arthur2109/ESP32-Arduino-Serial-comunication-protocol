#include "wifi.h"

bool WIFI::init(){

  last_T=millis();
  WiFi.begin(ssid,pass);
  Serial.println("conecting...");
  while(WiFi.status()!=WL_CONNECTED) {//struct
    if (millis()-last_T>TIME_OUT){
      Serial.println("Wifi no disponible");
      delay(500);
      return false;}
    else{
      Serial.println(".");
      delay(500);
    }
  }
  Serial.print("conectado a wifi");
  Serial.println(ssid);
  Serial.println("direccion IP :"+WiFi.localIP());
  return true;
  }