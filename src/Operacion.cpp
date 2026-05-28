#include"Operacion.h"

Operacion::Operacion(){

    A = 0;
    B = 0;

}

Operacion::~Operacion(){

}

void Operacion::setA(float a){

    A = a;
}

void Operacion::setB(float b){

    B = b;

}

float Operacion::getA(){
    return A;
}

float Operacion::getB(){
    return B;
}