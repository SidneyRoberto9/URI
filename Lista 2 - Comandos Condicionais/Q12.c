#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("\nNumero Invalido\n");
    } else {
        printf("\nO logaritmo desse valor e':");
        printf("%.3lf",log10(num));
    }

    return 0;
}
