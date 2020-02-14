#include <stdio.h>
#define PI 3.14

int main()
{
    float g, r;

    printf("Digite um angulo em radianos: ");
    scanf("%f", &r);

    g = r * 180/PI;

    printf("\nO Angulo convertido para Graus e' %.2f", g);

    return 0;
}
