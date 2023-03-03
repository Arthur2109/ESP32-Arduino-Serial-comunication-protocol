#ifndef _MAIN_H_
#define _MAIN_H_

#include "include.h"
#include "serial.h"

class FSM {
    public:         //clase publica para FInite State Machine
    void FSM_Principal(int estado_in);
    enum state {inicio = 0, conf = 1, operacion = 2}; //state {0,1,2}
    int get_state();

    private:
    void Init();
    int estado;     //por encapsulamiento
    
};







#endif
