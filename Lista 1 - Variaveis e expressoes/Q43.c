#include <stdio.h>

int main()
{
    float vt;

    printf("Informe o valor total R$ ");
    scanf("%f", &vt);

    printf("\nTotal com 10 de disconto R$%.2f",vt - (vt *0.10));
    printf("\nValor de caad parcela 3x sem juros R$%.2f", vt/3);
    printf("\nCaso venda a vista R$%.2f", (vt - (vt * 0.10)) * 0.05);
    printf("\nCaso venda a parcelada R$%.2f", vt *0.05);

    return 0;
}
