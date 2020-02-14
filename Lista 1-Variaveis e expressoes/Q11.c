#include <stdio.h>

int main()
{
    float km, ms;

    printf("Digite sua velocidade em m/s: ");
    scanf("%f", &ms);

    km = ms * 3.6;

    printf("\nA velocidade em km/h e' %.2f", km);

    return 0;
}
