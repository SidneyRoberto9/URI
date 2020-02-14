#include <stdio.h>

int main()
{
    float m, j;

    printf("Digite um comprimento em metros: ");
    scanf("%f", &m);

    j = m / 0.91;

    printf("\nO comprimento em jardas e' %.2f", j);

    return 0;
}
