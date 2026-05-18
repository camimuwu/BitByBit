#include<iostream>
#include<string>
#include"Suma.hpp"
#include"Resta.hpp"
#include"Division.hpp"
#include"Multiplicacion.hpp"


int a;

int main()
{
    do
    {
        std::cout << "Bienvenido a MathCore by BitByBit\n";
        std::cout << "Menu\n";
        std::cout << "0.- Si desea salir del programa\n";
        std::cout << "1.- Suma\n" ;
        std::cout << "2.- Resta\n";
        std::cout << "3.- Division\n";
        std::cout << "4.- Multiplicacion\n";

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

                suma();

                break;

            case 2:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                resta();

                break;

            case 3:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                division();

                break;

            case 4:
                std::cout << "Tienes 30 segundos para resolver las ecuaciones. Presiona enter para empezar\n";
                std::cin.ignore();
                std::cin.get();

                multiplicacion();

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