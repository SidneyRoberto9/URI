#include <stdio.h>

int main()
{
    float d;

    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%f", &d);

    printf("\nO valor liquido %.2f\nO valor com o desconto do imposto de renda %.2f", d*30,(d*30) - ((d*30)*0.08));


    return 0;
}
