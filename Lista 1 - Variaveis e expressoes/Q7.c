#include <stdio.h>

int main()
{
    float c, f;

    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (5 *(f - 32))/9;

    printf("\nA temperatura em Celsius e' %.2f", c);

    return 0;
}
