#include <stdio.h>

int main()
{
    float k,c;

    printf("Informe a temperatura em Kelvin: ");
    scanf("%f", &k);

    c = k - 273.15;

    printf("\nA temperatura em Celsius e' %.2f", c);

    return 0;
}
