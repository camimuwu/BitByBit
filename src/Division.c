#include "Division.h"
#include<stdio.h>
#include<stdlib.h>
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

        printf("Division a resolver: %d / %d = ", r1q * r2q, r1q);
        scanf("%d", &aq);

        if (aq == r2q) 
        {
            printf("Correcto\n");
            printf("\n");
            correctas++;
        }
        else
        {
            printf("Incorrecto, respuesta correcta: %d\n", r2q);
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