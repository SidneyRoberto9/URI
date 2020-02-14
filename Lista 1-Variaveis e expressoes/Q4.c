#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("\nO Quadrado desse numero e' %.2f", pow(numero,2));

    return 0;
}
