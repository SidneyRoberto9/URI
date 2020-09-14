#include <stdio.h>
#define PI 3.141592

int main()
{
    float alt, r, v;

    printf("informe a altura do cilindro: ");
    scanf("%f", &alt);

    printf("informe o raio do cilindro: ");
    scanf("%f", &r);

    v = PI * (r*r)* alt;

    printf("\nO Volume do cilindro e' %.2f", v);

    return 0;
}
