#include <stdio.h>
#define PI 3.14

int main()
{
    float g, r;

    printf("Digite um angulo em Graus: ");
    scanf("%f", &g);

    r = g * PI/180;

    printf("\nO Angulo convertido para radianos e' %.2f", r);

    return 0;
}
