#include "Division.h"
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

void division()
{
    int aq, r1q, r2q, iq;
    int minq = 1;
    int maxq = 10;

    srand(time(NULL));

    for(iq = 1; iq <= 5; iq++)
    {
        r1q = (rand() % maxq) + minq;
        r2q = (rand() % maxq) + minq;

        printf("%d) %d / %d = ", iq, r1q * r2q, r1q);
        scanf("%d", &aq);

        if (aq == r2q) 
        {
            printf("Correcto\n");
            printf("\n");
        }
        else
        {
            printf("Mal, era %d\n", r2q);
            printf("\n");
        }
    }
    printf("Precione enter para volver al menu\n");
    while (getchar() != '\n' && getchar() != EOF);
    getchar();
}