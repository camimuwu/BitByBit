#ifndef SUMA_H
#define SUMA_H
#include "Operacion.h"

class Suma : public Operacion{ //Suma hereda de operacion

    public:

        Suma();
        ~Suma();

        void operar();
    };

#endif