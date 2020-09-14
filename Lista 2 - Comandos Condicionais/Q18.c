#include <stdio.h>

int main()
{
    int esc, v1, v2;

    printf("Menu:\n");
    printf("1 - Soma\n");
    printf("2 - Divisao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Subtracao\n");
    scanf("%d", &esc);

    switch (esc){
        case 1:
            scanf("%d", &v1);
            scanf("%d", &v2);
            printf("\nSoma: %d", v1+v2);
            break;
        case 2:
            scanf("%d", &v1);
            scanf("%d", &v2);
            printf("\nDivisao: %d", v1/v2);
            break;
        case 3:
            scanf("%d", &v1);
            scanf("%d", &v2);
            printf("\nMultiplicacao: %d", v1*v2);
            break;
        case 4:
            scanf("%d", &v1);
            scanf("%d", &v2);
            printf("\nSubtracao: %d", v1-v2);
            break;
    }
    return 0;
}
