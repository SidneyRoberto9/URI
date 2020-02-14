#include <stdio.h>

int main()
{
    float m, h;

    printf("Digite um valor de area em metros quadrados: ");
    scanf("%f", &m);

    h = m * 0.0001;

    printf("\nO valor de area em hectares e' %f", h);

    return 0;
}
