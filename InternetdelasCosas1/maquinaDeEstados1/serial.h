#ifndef _SERIAL_H_
#define _SERIAL_H_


#include "include.h"

class Ser
{
  public:
    void leerserial();
    void init();
    void set_ESP_T(int val);
    void set_ESP_S(int val);
    int get_ESP_T();
    int get_ESP_S();
    void print_c(String val);

  private:
    void interpretar();
    char buff[20];
    int index;
    float n;
    int Flag_ESP_state;
    int Flag_ESP_temp;
    String cmd;

};






#endif
