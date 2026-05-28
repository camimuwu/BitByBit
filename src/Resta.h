#ifndef RESTA_H
#define RESTA_H
#include "Operacion.h"

class Resta : 
    public 
    
    Operacion{ //Resta hereda de operacion

        public:

            Resta();
            ~Resta();

            void operar();
    };

#endif