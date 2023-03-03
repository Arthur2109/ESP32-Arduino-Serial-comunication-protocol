#include "serial.h"

void Ser::Init(){
  index=0;
  Serial.begin(115200);
  
}

void Ser::leerSerial(){
  while(Serial.available()>0){
    char c = Serial.read();

    if(c == '\n'){
      buff[index] = '\0';
      interpretar();
      command= "";
      index=0;
    }else{
      buff[index] = c;
      command += c;
      index++;
    }
  }
}

void Ser::interpretar(){
  if(strlen(buff)>=2){
    if(command == "ESP_OK"){
      set_ESP_State(1);
      Serial.println("T?");
    }else if(command == "ESP_T_OK"){
      
      set_ESP_T(1);
      digitalWrite(2,HIGH);
      delay(200);
      digitalWrite(2,LOW);
      delay(200);
      digitalWrite(2,HIGH);
      delay(200);
      digitalWrite(2,LOW);
      delay(200);
      Serial.println("T?");
      
    }
   /* if(buff[0] == 'A'){
      n = atof(buff + 1);
      
      if(n == 1){
        Serial.println("Estado A1");
      }else if (n == 2){
        Serial.println("Estado A2");
      }
    }else if(buff[0] == 'B'){
      n = atof(buff + 1);
      
      if(n == 1){
        Serial.println("Estado B1");
      }else if (n == 2){
        Serial.println("Estado B2");
        
      }
    }else if(buff[0] == 'C'){
      n = atof(buff + 1);
      
      if(n == 1){
        Serial.println("Estado C1");
      }else if (n == 2){
        Serial.println("Estado C2");
        
      }
    }*/
  }
}
void Ser::print_c(String val){
  Serial.println(val);
}
void Ser::set_ESP_T(int val){
  Flag_ESP_t = val;
}
void Ser::set_ESP_State(int val){
  Flag_ESP_state = val;
}
int Ser::get_ESP_T(){
  return Flag_ESP_t;
}
int Ser::get_ESP_State(){
  return Flag_ESP_state;
}
