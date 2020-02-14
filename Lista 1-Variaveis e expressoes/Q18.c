#include <stdio.h>

int main()
{
    float m, l;

    printf("Digite um volume em metros cubicos: ");
    scanf("%f", &m);

    l = 1000 * m;

    printf("\nO Volume convertido para litros e' %.2f", l);

    return 0;
}
