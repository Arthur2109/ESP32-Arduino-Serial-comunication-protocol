#include "serial.h"

void Ser::init() {
  index = 0;
  Serial.begin(115200);
  cmd="";
}
void Ser::leerserial() {
  while (Serial.available() > 0) {
    char c = Serial.read();
    //HOLA/n/r
    if (c == '\n') { //si ya terminó la palabra
      buff[index] = '\0';
      interpretar();
  
      index = 0;
      cmd = "";
    } else { //si no ha terminado la palabra
      buff[index] = c;
      cmd = cmd + buff[index];
      index++;
    }
  }
}
void Ser::interpretar() {
  if (strlen(buff) >= 2) {

    if (cmd == "ESP_STATE") {
      delay(200);
      print_c("ESP_OK");
      delay(100);
      digitalWrite(LV, HIGH);
      digitalWrite(LR, LOW);
      delay(500);
      digitalWrite(LR, HIGH);
      digitalWrite(LV, LOW);
      //Flag_ESP_state = 1;
    }if (buff[0] == 'T') {
      delay(200);
      print_c("ESP_T_OK");
      delay(100);
      digitalWrite(LV, HIGH);
      digitalWrite(LR, LOW);
      delay(500);
      digitalWrite(LR, HIGH);
      digitalWrite(LV, LOW);

      //Flag_ESP_temp = 1;
    }
    /*
      if (buff[0] == 'A') { //categoría 1
      n = atof(buff + 1);
      if (n == 1) {
        Serial.println("Estado A1");

      } else if (n == 2) {
        Serial.println("Estado A2");

      }
      } else if (buff[0] == 'B') { //categoría 2
      n = atof(buff + 1);
      if (n == 1) {
        Serial.println("Estado B1");

      } else if (n == 2) {
        Serial.println("Estado B2");

      }


      }
    */
  }
}

void Ser::print_c(String val) {

  Serial.print(val);
  Serial.print('\n');


}

void Ser::set_ESP_T(int val) {
  Flag_ESP_temp = val;

}
void Ser::set_ESP_S(int val) {

  Flag_ESP_state = val;
}
int Ser::get_ESP_T() {
  return Flag_ESP_temp;

}
int Ser::get_ESP_S() {

  return Flag_ESP_state;

}
