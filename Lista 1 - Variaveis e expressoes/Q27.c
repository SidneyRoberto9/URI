#include <stdio.h>

int main()
{
    float m, h;

    printf("Digite um valor de area em hectares: ");
    scanf("%f", &h);

    m = h * 10000;

    printf("\nO valor de area em metros quadrados e' %f", m);

    return 0;
}
