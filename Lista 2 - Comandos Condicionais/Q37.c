#include <stdio.h>

int main()
{
    int chegadax, chegaday, saidax, saiday;
    float totalx, totaly;

    printf("Informe o horario de chegada: ");
    scanf("%d %d", &chegadax, &chegaday);

    printf("Informe o horario de saida: ");
    scanf("%d %d", &saidax, &saiday);

    if (chegadax > saidax){
        saidax = saidax + 24;
    }

    if (chegaday > 60){
        chegadax += 1;
    }

    if (saiday > 60){
        saidax +=1;
    }

    totalx = saidax - chegadax;
    totaly = saiday - chegaday;

    if (totalx >= 5){
        totalx = totalx * 2;

    } else if ((totalx <= 4) && (totalx >=3)){
        totalx = totalx * 1.4;

    }

    printf("total a pagar R$%.2f",totalx);

    return 0;
}
