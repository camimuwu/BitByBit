#ifndef POTENCIA_H
#define POTENCIA_H
#include "Operacion.h"

class Potencia : public Operacion{ //Potencia hereda de operacion

    public:

        Potencia();
        ~Potencia();

        void operar();
    };

#endif