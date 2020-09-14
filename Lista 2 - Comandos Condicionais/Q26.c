#include <stdio.h>

int main()
{
    float dist, gasto, gas;

    printf("Informe a distancia em KM: ");
    scanf("%f", &dist);

    printf("Informe a gasolina gasta no percurso: ");
    scanf("%f", &gas);

    gasto = dist / gas;

    if (gasto <= 8 ){
        printf("\nVenda o carro!\n");
    } else if ((gasto > 8)&&(gasto < 14)){
        printf("\nEconomico!\n");
    } else if (gasto > 14){
        printf("\nSuper Economico!\n");
    }

    return 0;
}
