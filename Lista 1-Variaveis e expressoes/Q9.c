#include <stdio.h>

int main()
{
    float k,c;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("\nA temperatura em Kelvin e' %.2f", k);

    return 0;
}
