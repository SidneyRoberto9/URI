#include <stdio.h>

int main()
{
    float real, cdolar, dolar;

    printf("Informe o valor em real: ");
    scanf("%f", &real);

    printf("Informe a Contacao do dolar: ");
    scanf("%f", &cdolar);

    dolar = real * cdolar;

    printf("\nO valor em dolar e $%.2f",dolar);

    return 0;
}
