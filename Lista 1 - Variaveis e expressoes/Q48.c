#include <stdio.h>

int main()
{
    int ss, mm ,hh;

    printf("Informe um valor em segundos: ");
    scanf("%d", &ss);

    mm = ss /60;
    ss = ss % 60;
    hh = mm/ 60;
    mm = mm % 60;

    printf("\nHora = %d\nMinutos = %d\nSegundos = %d\n", hh ,mm, ss);
    printf("\n%d:%d:%d", hh, mm, ss);

    return 0;
}
