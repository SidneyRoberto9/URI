#include <stdio.h>

int main()
{
    float m, km;

    printf("Digite a distancia em Quilometros: ");
    scanf("%f", &km);

    m = km / 1.61;

    printf("\nA distancia em Milhas e' %.2f", m);

    return 0;
}
