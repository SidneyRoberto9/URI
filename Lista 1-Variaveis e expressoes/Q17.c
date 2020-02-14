#include <stdio.h>

int main()
{
    float p, c;

    printf("Digite um comprimento em centimentros: ");
    scanf("%f", &c);

    p = c / 2.54;

    printf("\nO Comprimento convertido para polegadas e' %.2f", p);

    return 0;
}
