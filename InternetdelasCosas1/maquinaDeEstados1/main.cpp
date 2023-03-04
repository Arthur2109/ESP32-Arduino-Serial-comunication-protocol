#include "main.h"

Ser S;
WIFI W;

void FSM::FSM_Principal(int estado_1){
  if(estado_1 == inicio){
    W.init();
    S.init();
    estado = opera;
  }else if(estado_1 == conf){


    
  }else if(estado_1 == opera){
    S.leerserial();
    
  }
}

void FSM::Init(){



  
}

int FSM::get_state(){

  return estado;
  
}
