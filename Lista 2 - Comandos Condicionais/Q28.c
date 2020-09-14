#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, num3, total;
    int esc;

    printf("Informe 3 valores inteiros positivos: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("Escolha a operacao\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - aritmetrica\n");
    printf("escolha: ");
    scanf("%d", &esc);

    switch (esc){
        case 1:
            total = pow(num1 + num2 + num3,1/3);
            printf("Total = %f", total);
            break;

        case 2:
            total = (num1 + (2*num2) + (3*num3))/6;
            printf("Total = %f", total);
            break;

        case 3:
            total = 1/((1/num1)+(1/num2)+(1/num3));
            printf("Total = %f", total);
            break;

        case 4:
            total = (num1 + num2 + num3)/3;
            printf("Total = %f", total);
            break;

        default:
            printf("Error...");
    }

    return 0;
}
