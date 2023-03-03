#include "main.h"

FSM F;
void setup() {
  pinMode(2,OUTPUT);
  digitalWrite(2,LOW);
  F.FSM_Principal(0); //inicializa el estado en 0
  // put your setup code here, to run once:

}

void loop() {
  F.FSM_Principal(F.get_state());
  // put your main code here, to run repeatedly:

}
