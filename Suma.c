#include "Suma.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void suma(){

    int min, max, respuesta, correcta;
    min = 1;
    max = 10;

    srand(time(NULL));

    for (int i = 0; i<3; i++){

        int a = (rand() % max) + min;
        int b = (rand() % max) + min;

        printf("Suma a resolver: %d + %d: ", a, b);
        scanf("%d", &respuesta);

        correcta = a+b;

        if (respuesta == correcta){
            printf("Correcto\n");
        }
        else {
            printf("Respuesta correcta: %d\n", correcta);
        }

    }
    



}