#include <stdio.h>

int main()
{
    float m, l;

    printf("Digite um volume em litros: ");
    scanf("%f", &l);

    m = l / 1000;

    printf("\nO Volume convertido para metros cubicos e' %.2f", m);

    return 0;
}
