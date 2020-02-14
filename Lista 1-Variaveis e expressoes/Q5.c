#include <stdio.h>

int main()
{
    float numero;

    printf("digite um numero: ");
    scanf("%f", &numero);

    printf("\nA Quinta parte de %.2f equivale a %.2f", numero, numero * 1/5);

    return 0;
}
