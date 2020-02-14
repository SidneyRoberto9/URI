#include <stdio.h>

int main()
{
    float p, c;

    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &p);

    c = p * 2.54;

    printf("\nO Comprimento convertido para centimentros e' %.2f", c);

    return 0;
}
