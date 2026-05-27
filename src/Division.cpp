#include"Division.h"
#include<iostream>

#include<time.h>

void Division::operar()
{
    int respuesta;
    int min = 1;
    int max = 10;
    int correctas = 0, incorrectas = 0;
    time_t inicio;

    srand(time(NULL));

    inicio = time(NULL);

    while (difftime(time(NULL), inicio) < 30)
    {
        setA((rand() % max) + min);
        setB((rand() % max) + min);

        std::cout << "Division a resolver: " << getA() * getB() << " / " << getA() << " = ";
        std::cin >> respuesta;

        if (respuesta == getB()) 
        {
            std::cout << "Correcto\n";
            std::cout << "\n";
            correctas++;
        }
        else
        {
            std::cout << "Incorrecto, respuesta correcta: " << getB() << std::endl;
            std::cout << "\n";
            incorrectas++;
        }
    }
    std::cout << "El tiempo ha acabado!\n";
    std::cout << "\n";
    std::cout << "Total de ecuaciones resueltas: " << correctas + incorrectas << std::endl;
    std::cout << "Total de respuestas correctas: " << correctas << std::endl;
    std::cout << "Total de respuestas incorrectas: " << incorrectas << std::endl;
    std::cout << "\n";
    std::cout << "Presione la tecla enter para volver al menu principal" << std::endl;

    std::cin.ignore();
    std::cin.get();
}