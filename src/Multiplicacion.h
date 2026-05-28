#ifndef MULTIPLICACION_H
#define MULTIPLICACION_H
#include "Operacion.h"

class Multiplicacion : public Operacion{ //Multiplicacion hereda de operacion

    public:

        Multiplicacion();
        ~Multiplicacion();

        void operar();
    };

#endif