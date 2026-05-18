#include"Division.hpp"
#include<iostream>

#include<time.h>

void division()
{
    int aq, r1q, r2q;
    int minq = 1;
    int maxq = 10;
    int correctas = 0, incorrectas = 0;
    time_t inicio;

    srand(time(NULL));

    inicio = time(NULL);

    while (difftime(time(NULL), inicio) < 30)
    {
        r1q = (rand() % maxq) + minq;
        r2q = (rand() % maxq) + minq;

        std::cout << "Division a resolver: " << r1q * r2q << " / " << r1q << " = ";
        std::cin >> aq;

        if (aq == r2q) 
        {
            std::cout << "Correcto\n";
            std::cout << "\n";
            correctas++;
        }
        else
        {
            std::cout << "Incorrecto, respuesta correcta: " << r2q << std::endl;
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