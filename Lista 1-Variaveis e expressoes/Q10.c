#include <stdio.h>

int main()
{
    float km, ms;

    printf("Digite sua velocidade em km/h: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf("\nA velocidade em m/s e' %.2f", ms);

    return 0;
}
