#include <stdio.h>

int main()
{
    float venda, com;

    printf("Informe o valor das Vendas mensais: ");
    scanf("%f", &venda);

    if (venda >= 100000){
        com = 700 + (venda*0.16);

    } else if ((venda < 100000)&&(venda >= 80000)){
        com = 650 + (venda*0.14);

    } else if ((venda < 80000)&&(venda >= 60000)){
        com = 600 + (venda*0.14);

    } else if ((venda < 60000)&&(venda >= 40000)){
        com = 550 + (venda*0.14);

    } else if ((venda < 40000)&&(venda >= 20000)){
        com = 500 + (venda*0.14);

    } else if (venda < 20000){
        com = 400 + (venda*0.14);
    }

    printf("A sua comissao vai ser de R$%.2f",com);

    return 0;
}
