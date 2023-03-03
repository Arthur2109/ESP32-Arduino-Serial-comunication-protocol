#include "main.h"

Ser S;

void FSM::FSM_Principal(int estado_in){     
  if(estado_in == inicio){        //revisa el estado en el que esta la maquina de estados
    estado = inicio;
    S.Init();
    S.set_ESP_State(0);
    delay(500);
    while(S.get_ESP_State() != 1){
      delay(500);
      Serial.println("ESP_State?");
       S.leerSerial();
       digitalWrite(2,HIGH);
    }
    digitalWrite(2,HIGH);
    delay(1000);
    estado = operacion;
    
  }else if(estado_in == conf){
   

    
    
  }else if(estado_in == operacion){
    
    S.leerSerial();

    digitalWrite(2,LOW);
    
  }



}

void FSM::Init(){
  
}
int FSM::get_state(){
  return estado;
}
