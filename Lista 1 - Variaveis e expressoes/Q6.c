#include <stdio.h>

int main()
{
    float c, f;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &c);

    f = (c * (9/5))+ 32;

    printf("\nA temperatura em Fahrenheit e' %.2f", f);

    return 0;
}
