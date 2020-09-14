#include <stdio.h>

int main()
{
    float c,l, p,custo;

    printf("Informe o Comprimento: ");
    scanf("%f", &c);

    printf("Informe o Comprimento: ");
    scanf("%f", &l);

    printf("Informe metro de tela: ");
    scanf("%f", &p);

    custo = (c * l) * p;

    printf("\nCusto Do terreno e de R$%.2f",custo);

    return 0;
}
