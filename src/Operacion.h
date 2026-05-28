#ifndef OPERACION_H
#define OPERACION_H
class Operacion {

    private:

        float A;
        float B;

    public:

        Operacion();
        ~Operacion();

        void setA(float a);
        void setB(float b);

        float getA();
        float getB();

        virtual void operar() = 0;
};

#endif