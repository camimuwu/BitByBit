#include<stdio.h>

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
                /* code */
                break;

            case 1:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 
                break;

            case 2:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 
                break;

            case 3:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 
                break;

            case 4:
                printf("Precione una tecla para inicar\n");
                while (getchar() != '\n' && getchar() != EOF);
                getchar(); 
                break;
        
        default:
            printf("Opcion invalida\n");
            
        }

    }
    while (a != 0);

    return 0;


}