#include <stdio.h>

int main()
{
    int esc;

    printf("Informe um numero de 1 a 7: ");
    scanf("%d", &esc);

    switch (esc){
    case 1:
        printf("\nDomingo\n");
        break;
    case 2:
        printf("\nSegunda-Feira\n");
        break;
    case 3:
        printf("\nTerca-Feira\n");
        break;
    case 4:
        printf("\nQuarta-Feira\n");
        break;
    case 5:
        printf("\nQuinta-Feira\n");
        break;
    case 6:
        printf("\nSexta-Feira\n");
        break;
    case 7:
        printf("\nSabado\n");
        break;
    default:
        printf("\nNumero Invalido\n");
    }

    return 0;
}
