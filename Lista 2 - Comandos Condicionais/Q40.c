#include <stdio.h>

int main()
{
    float custo;

    printf("Informe o Custo da frabrica: ");
    scanf("%f", &custo);

    if (custo <= 12000){
        custo = (custo * 0.05) + custo;

    } else if ((custo > 12000)&&(custo < 25000)){
        custo = (custo * 0.10) + (custo * 0.15) + custo;

    } else if (custo >= 25000){
        custo = (custo * 0.15) + (custo * 0.20) + custo;
    }

    printf("O custo total serai de R$%.2f",custo);

    return 0;
}
