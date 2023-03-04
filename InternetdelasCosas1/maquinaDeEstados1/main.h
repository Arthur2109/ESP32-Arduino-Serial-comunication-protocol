#ifndef _MAIN_H_
#define _MAIN_H_

#include "include.h"
#include "serial.h"
#include "wifi.h"

class FSM
{

  public:
  void FSM_Principal(int estado_1);
  enum state {inicio = 0, conf = 1, opera = 2};
  int get_state();

  private:
  void Init();
  int estado;
  
};


#endif
