#include<stdio.h>
#include "Suma.h"
#include "Resta.h"
#include "Division.h"
#include "Multiplicacion.h"


int a;

int main()
{
    do
    {
        printf("Bienvenido\n");
        printf("Intro\n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Division\n");
        printf("4.- Multiplicacion\n");

        printf("Ingrese la opcion a elegir: \n");
        scanf("%d", &a);

        switch (a)
        {

            case 0:
                printf("Saliendo...\n");
                break;

            case 1:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 

                suma();

                break;

            case 2:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 

                resta();

                break;

            case 3:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar();

                division();

                break;

            case 4:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar();

                int a, b;
                int mult = multiplicacion(a, b);
                printf("%d", mult)

                break;
        
        default:
            printf("Opcion invalida\n");
            printf("Precione una tecla para volver al menu\n");
            while (getchar() != '\n' && getchar() != EOF);
            getchar();
            
        }

    }
    while (a != 0);

    return 0;


}