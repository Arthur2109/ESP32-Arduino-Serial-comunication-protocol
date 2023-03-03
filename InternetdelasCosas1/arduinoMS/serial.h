#ifndef _SERIAL_H_
#define _SERIAL_H_

#include "include.h"

class Ser
{
  public:
    void leerSerial();
    void Init();
    void set_ESP_T(int val);
    void set_ESP_State(int val);
    int get_ESP_T();
    int get_ESP_State();
    void print_c(String val);
    
  private:
    String command = "";
    void interpretar();
    char buff[20];
    int index;
    float n;
    int Flag_ESP_state;       //encapsulamiento es necesario definir variables privadas
    int Flag_ESP_t;
    
};



#endif
