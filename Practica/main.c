#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char opcion;
    char salir = 'n';
    int flagUno = 0;
    int flagDos = 0;
    do
    {
        system("cls");
        printf("----------MENU DE OPCIONES----------\n\n");
        printf("A: Saludar\n");
        printf("B: Brindar\n");
        printf("C: Despedir\n");
        printf("D: Salir\n");
        printf("Seleccione opcion: ");
        fflush(stdin);
        scanf("%c",&opcion);
        opcion=toupper(opcion);

        switch(opcion)
        {
        case 'A':
            printf("Hola,como estas?\n");
            flagUno = 1;
            system("pause");
            break;
        case 'B':
            if(flagUno==1)
            {
                printf("CHIN CHIN\n");
                flagDos = 1;
                system("pause");
            }
            else
            {
                printf("No podemos brindar si no nos saludamos primero \n");
                system("pause");
            }

            break;
        case 'C':
            if(flagUno == 1 && flagDos == 1)
            {
                printf("Chau, nos vemos despues\n");
                system("pause");
            }
            else if(flagUno==1)
            {
                printf("Si no bridamos no nos podemos despedir\n");
                system("pause");
            }
            else
            {
                printf("si no nos saludamos ni brindamos no nos podemos despedir\n");
                system("pause");
            }

            break;
        case 'D':
            flagDos = 0;
            flagUno = 0;
            printf("Usted desea salir? ");
            fflush(stdin);
            scanf("%c",&salir);

        }
    }
    while(salir == 'n');

    return 0;
}
