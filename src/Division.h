#ifndef DIVISION_H
#define DIVISION_H
#include "Operacion.h"

class Division : public Operacion{ //Division hereda de operacion

    public:

        Division();
        ~Division();

        void operar();
    };

#endif