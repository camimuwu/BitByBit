#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include "Suma.h"
#include "Resta.h"
#include "Division.h"
#include "Multiplicacion.h"


int a;

int main()
{
    do
    {
        printf("Bienvenido MathCore by BitByBit\n");
        printf("Intro\n");
        printf("0.- Si desea salir del programa\n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Division\n");
        printf("4.- Multiplicacion\n");

        printf("Ingrese la opcion a elegir: ");
        scanf("%d", &a);

        switch (a)
        {

            case 0:
                printf("Saliendo...\n");
                break;

            case 1:
                printf("Tienes 30 segundos para resolver las ecuaciones. Preciona enter para empezar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 

                suma();

                break;

            case 2:
                printf("Tienes 30 segundos para resolver las ecuaciones. Preciona enter para empezar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 

                resta();

                break;

            case 3:
                printf("Tienes 30 segundos para resolver las ecuaciones. Preciona enter para empezar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar();

                division();

                break;

            case 4:
                printf("Tienes 30 segundos para resolver las ecuaciones. Preciona enter para empezar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar();

                multiplicacion();

                break;
        
        default:
            printf("Opcion invalida\n");
            printf("Precione la tecla enter para volver al menu principal\n");
            while (getchar() != '\n' && getchar() != EOF);
            getchar();
        }

    }
    while (a != 0);

    return 0;


}