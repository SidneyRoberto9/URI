#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Informe uma data(DD/MM/AAAA): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if ((mes <= 12) && (mes >=1)){
        if (mes % 3 == 0){
            if (dia > 31){
                printf("A data esta errada");
            } else {
                printf("A data esta certa");
            }
        } else if ((mes != 2) && (mes % 2 == 0)){
            if (dia > 30){
                printf("A data esta errada");
            } else {
                printf("A data esta certa");
            }
        } else if (mes == 2){
            if ((ano % 400 == 0)||((ano % 4 ==0)&&(ano %100 != 0))){
                if (dia > 29){
                    printf("A data esta errada");
                } else {
                    printf("A data esta certa");
                }
            } else {
                if (dia > 28){
                    printf("A data esta errada");
                } else {
                    printf("A data esta certa");
                }
            }
        }
    }

    return 0;
}
