#include "Suma.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void suma(){

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

        printf("Suma a resolver: %d + %d: ", a, b);
        scanf("%d", &respuesta);

        correcta = a+b;

        if (respuesta == correcta){
            printf("Correcto\n");
            printf("\n");
            correctas++;
        }
        else {
            printf("Incorrecto, respuesta correcta: %d\n", correcta);
            printf("\n");
            incorrectas++;
        }
        
    }
    printf("El tiempo a acabado!\n");
    printf("\n");
    printf("Total de ecuaciones resueltas: %d\n", correctas + incorrectas);
    printf("Total de respuestas correctas: %d\n", correctas);
    printf("Total de respuestas incorrectas: %d\n", incorrectas);
    printf("\n");
    printf("Precione la tecla enter para volver al menu principal\n");
    while (getchar() != '\n' && getchar() != EOF);
    getchar();
}