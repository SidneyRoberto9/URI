#include <stdio.h>

int main()
{
    float m, km;

    printf("Digite a distancia em Milhas: ");
    scanf("%f", &m);

    km = m * 1.61;

    printf("\nA distancia em Quilometros e' %.2f", km);

    return 0;
}
