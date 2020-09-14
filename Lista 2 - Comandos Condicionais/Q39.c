#include <stdio.h>

int main()
{
    float sat, tpds;

    printf("Informe o Salario atual: ");
    scanf("%f", &sat);

    printf("Informe o Seu tempo de Contribuicao(em anos): ");
    scanf("%f", &tpds);

    if (sat < 500){
        sat = sat + (sat*0.25);

    } else if ((sat >= 500) && (sat < 1000)){
        sat = sat + (sat * 0.20);

    }else if ((sat >= 1000) && (sat < 1500)){
        sat = sat + (sat * 0.15);

    }else if ((sat >= 1500) && (sat < 2000)){
        sat = sat + (sat * 0.10);

    }else if (sat > 2000) {
        sat = sat;
    }


    if (tpds < 1){
        sat = sat;

    } else if (tpds >= 1 && tpds <=3){
        sat = sat + 100;

    } else if (tpds >= 4 && tpds <=6){
        sat = sat + 200;

    } else if (tpds >= 7 && tpds <=10){
        sat = sat + 300;

    } else if (tpds > 10){
        sat = sat + 500;
    }

    printf("O seu salario apos o reajuste e' R$%.2f",sat);

    return 0;
}
