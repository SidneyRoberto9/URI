#include <stdio.h>

int main()
{
    int hh, mm, ss, d;

    printf("Informe a Hora: ");
    scanf("%d",&hh);

    printf("Informe os Minutos: ");
    scanf("%d",&mm);

    printf("Informe os Segundos: ");
    scanf("%d",&ss);

    printf("Informe a Duracao em segundos: ");
    scanf("%d",&d);

    ss = ss + d;
    mm = mm + ss/60;
    ss = ss% 60;
    hh = hh + mm/60;
    mm = mm % 60;


    printf("\nHora = %d\nMinutos = %d\nSegundos = %d\n", hh ,mm, ss);

    return 0;
}
