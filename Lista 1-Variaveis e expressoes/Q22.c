#include <stdio.h>

int main()
{
    float m, j;

    printf("Digite um comprimento em jardas: ");
    scanf("%f", &j);

    m = j * 0.91;

    printf("\nO comprimento em metros e' %.2f", m);

    return 0;
}
