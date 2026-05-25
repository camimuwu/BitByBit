#include<iostream>
#include"Suma.hpp"
#include"Resta.hpp"
#include"Division.hpp"
#include"Multiplicacion.hpp"
#include"Potencia.hpp"

int main(){

    Suma suma;
    Resta resta;
    Division division;
    Multiplicacion multiplicacion;
    Potencia potencia;
    
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

        std::cout << "Ingrese la opcion a elegir: ";
        std::cin >> a;

        switch (a)
        {

            case 0:
                std::cout << "Saliendo...\n";
                break;

            case 1:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                suma.jugar();

                break;

            case 2:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                resta.jugar();

                break;

            case 3:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                division.jugar();

                break;

            case 4:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                multiplicacion.jugar();

                break;
            
            case 5:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                potencia.jugar();

                break;
        
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