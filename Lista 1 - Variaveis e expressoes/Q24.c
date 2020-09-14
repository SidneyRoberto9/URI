#include <stdio.h>

int main()
{
    float m, a;

    printf("Digite um valor de area em metros quadrados: ");
    scanf("%f", &m);

    a = m * 0.000247;

    printf("\nO valor de area em acres e' %f", a);

    return 0;
}
