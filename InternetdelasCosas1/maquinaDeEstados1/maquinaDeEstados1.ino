#include "main.h"

FSM F;
void setup() {
  pinMode(17,OUTPUT);
  digitalWrite(17,LOW);
  F.FSM_Principal(0); //inicializa el estado en 0
  // put your setup code here, to run once:

}

void loop() {
  F.FSM_Principal(F.get_state());
  // put your main code here, to run repeatedly:

}
