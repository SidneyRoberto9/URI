#include <stdio.h>
#define PI 3.141592

int main()
{
    float r;

    printf("Digite o raio de um circulo: ");
    scanf("%f", &r);

    printf("\nA area do circulo e' %.4f", PI * (r*r));

    return 0;
}
