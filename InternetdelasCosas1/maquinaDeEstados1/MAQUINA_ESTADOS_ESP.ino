#include "main.h"

FSM F;

void setup() {
  // put your setup code here, to run once:
  pinMode(LR, OUTPUT);
  pinMode(LV, OUTPUT);
  digitalWrite(LR, LOW);
  digitalWrite(LV, LOW);
  F.FSM_Principal(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  digitalWrite(LV, HIGH);
  digitalWrite(LR, LOW);
  delay(1000);
  digitalWrite(LR, HIGH);
  digitalWrite(LV, LOW);
  delay(1000);
  */
  F.FSM_Principal(F.get_state());
}
