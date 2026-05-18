#include"Resta.hpp"
#include<iostream>

#include<time.h>

void Resta::jugar(){

    int min, max, respuesta, correcta;
    min = 1;
    max = 10;
    int correctas = 0, incorrectas = 0;
    time_t inicio;

    srand(time(NULL));

    inicio = time(NULL);

    while (difftime(time(NULL), inicio) < 30){

        int a = (rand() % max) + min;
        int b = (rand() % max) + min;

        std::cout << "Resta a resolver: " << a << " - " << b << " = ";
        std::cin >> respuesta;

        correcta = a-b;

        if (respuesta == correcta){
            std::cout << "Correcto\n";
            std::cout << "\n";
            correctas++;
        }
        else {
            std::cout << "Incorrecto, respuesta correcta: " << correcta << std::endl;
            std::cout << "\n";
            incorrectas++;
        }

    }
    std::cout << "El tiempo ha acabado!\n";
    std::cout << "\n";
    std::cout << "Total de ecuaciones resueltas: " <<  correctas + incorrectas << std::endl;
    std::cout << "Total de respuestas correctas: " << correctas << std::endl;
    std::cout << "Total de respuestas incorrectas: " << incorrectas << std::endl;
    std::cout << "\n";
    std::cout << "Presione la tecla enter para volver al menu principal" << std::endl;
    
    std::cin.ignore();
    std::cin.get();
}