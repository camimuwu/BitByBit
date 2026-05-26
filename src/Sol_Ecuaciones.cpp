#include"Sol_Ecuaciones.hpp"
#include<iostream>
#include <cmath>

#include<time.h>

void Sol_Ecuaciones::jugar(){

    int x1, x2, discriminante, raiz_entera, respuestap, respuestan;
    double raiz;
    int min = 1;
    int max = 15;
    int correctas = 0, incorrectas = 0, ecuacion = 0;
    time_t inicio;

    srand(time(NULL));

    inicio = time(NULL);

    while (difftime(time(NULL), inicio) < 30){

        int a = (rand() % max) + min;
        int b = (rand() % max) + min;
        int c = (rand() % max) + min;

        discriminante = (b * b) - (4 * a * c);

        if (discriminante > 0) {
            raiz = sqrt(discriminante);
            raiz_entera = (int)raiz;

            if ( raiz == raiz_entera) {

                if ((-b + raiz_entera) % (2 * a) == 0 && (-b - raiz_entera) % (2 * a) == 0) {

                    x1 = (-b + raiz_entera) / (2 * a);
                    x2 = (-b - raiz_entera) / (2 * a);
                        
                    std::cout << "Ecuacion a resolver: " << a << "x^2 + " << b << "x + " << c << std::endl;
                    
                    std::cout << "Solucion positiva = ";
                    std::cin >> respuestap;

                    if (respuestap == x1){
                        std::cout << "Correcto\n";
                        std::cout << "\n";
                        correctas++;
                    }
                    else {
                        std::cout << "Incorrecto, respuesta correcta: " << x1 << std::endl;
                        std::cout << "\n";
                        incorrectas++;
                    }

                    std::cout << "Solucion negativa = ";
                    std::cin >> respuestan;

                    if (respuestan == x2){
                        std::cout << "Correcto\n";
                        std::cout << "\n";
                        correctas++;
                    }
                    else {
                        std::cout << "Incorrecto, respuesta correcta: " << x2 << std::endl;
                        std::cout << "\n";
                        incorrectas++;
                    }

                    ecuacion++;
                }
            }
        }

    }

    std::cout << "El tiempo ha acabado!\n";
    std::cout << "\n";
    std::cout << "Total de ecuaciones resueltas: " << ecuacion << std::endl;
    std::cout << "Total de respuestas correctas: " << correctas << std::endl;
    std::cout << "Total de respuestas incorrectas: " << incorrectas << std::endl;
    std::cout << "\n";
    std::cout << "Presione la tecla enter para volver al menu principal" << std::endl;
    
    std::cin.ignore();
    std::cin.get();

}