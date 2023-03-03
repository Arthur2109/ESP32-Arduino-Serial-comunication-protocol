#include "main.h"

Ser S;

void FSM::FSM_Principal(int estado_in){     
  if(estado_in == inicio){        //revisa el estado en el que esta la maquina de estados
    estado = inicio;
    S.Init();
        
    while(S.get_ESP_State() !=1){
      S.leerSerial(); //alerta visual
    }
    estado = operacion;
    
  }else if(estado_in == conf){

    
    
  }else if(estado_in == operacion){
    
    S.leerSerial();
    
  }



}

void FSM::Init(){
  
}
int FSM::get_state(){
  return estado;
}
