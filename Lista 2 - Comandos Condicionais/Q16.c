#include <stdio.h>

int main()
{
    int esc;

    printf("Informe um numero de 1 a 12: ");
    scanf("%d", &esc);

    switch (esc){
    case 1:
        printf("\nJaneiro\n");
        break;
    case 2:
        printf("\nFevereiro\n");
        break;
    case 3:
        printf("\nMarco\n");
        break;
    case 4:
        printf("\nAbril\n");
        break;
    case 5:
        printf("\nMaio\n");
        break;
    case 6:
        printf("\nJunho\n");
        break;
    case 7:
        printf("\nJulho\n");
        break;
    case 8:
        printf("\Agosto\n");
        break;
    case 9:
        printf("\nSetembro\n");
        break;
    case 10:
        printf("\nOutubro\n");
        break;
    case 11:
        printf("\nNovembro\n");
        break;
    case 12:
        printf("\nDesembro\n");
        break;
    default:
        printf("\nNumero Invalido\n");
    }

    return 0;
}
