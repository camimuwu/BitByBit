#include<iostream>
#include"Suma.h"
#include"Resta.h"
#include"Division.h"
#include"Multiplicacion.h"
#include"Potencia.h"
#include"Raices.h"
#include"Operacion.h"

int main(){

    Suma suma;
    Resta resta;
    Division division;
    Multiplicacion multiplicacion;
    Potencia potencia;
    Raices raices;

int a;

    do
    {
        std::cout << "Bienvenido a MathCore by BitByBit\n";
        std::cout << "Menu\n";
        std::cout << "0.- Si desea salir del programa\n";
        std::cout << "1.- Suma\n" ;
        std::cout << "2.- Resta\n";
        std::cout << "3.- Division\n";
        std::cout << "4.- Multiplicacion\n";
        std::cout << "5.- Potencia\n";
        std::cout << "6.- Soluciones de ecuaciones\n";

        std::cout << "Ingrese la opcion a elegir: ";
        std::cin >> a;

        switch (a)
        {

            case 0:
                std::cout << "Saliendo...\n";
                break;

            case 1:{
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                Suma op;
                op.operar();

                break;
            }
            case 2:{
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                Resta op;
                op.operar();

                break;
            }
            case 3:{
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                Division op;
                op.operar();

                break;
            }
            case 4:{
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                Multiplicacion op;
                op.operar();

                break;
            }
            case 5:{
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                Potencia op;
                op.operar();

                break;
            }
            case 6:{
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                Raices op;
                op.operar();

                break;
            }
        default:
            std::cout << "Opcion invalida\n";
            std::cout << "Presione la tecla enter para volver al menu principal\n";
            std::cin.ignore();
            std::cin.get();
        } 
        

    }
    while (a != 0);

    return 0;

}