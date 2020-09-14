#include <stdio.h>

int main()
{
    float v1,v2,v3,p,vt;

    printf("Valor dado pelo jogador 1: ");
    scanf("%f", &v1);

    printf("Valor dado pelo jogador 2: ");
    scanf("%f", &v2);

    printf("Valor dado pelo jogador 3: ");
    scanf("%f", &v3);

    printf("Valor do Premio: ");
    scanf("%f", &p);

    vt = v1 +v2 +v3;

    v1 = v1/vt;
    v2 = v2/vt;
    v3 = v3/vt;

    printf("\nJogador 1: %.2f", vt * v1);
    printf("\nJogador 2: %.2f", vt * v2);
    printf("\nJogador 3: %.2f", vt * v3);

    return 0;
}
