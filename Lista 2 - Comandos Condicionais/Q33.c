#include <stdio.h>

int main()
{
    float p;

    printf("Informe o preco do produto: ");
    scanf("%f", &p);

    if (p <= 50){
        printf("O preco novo e' R$%.2f",p + (p*0.05));

    } else if ((p < 50)&(p < 100)){
        printf("O preco novo e' R$%.2f",p + (p*0.10));

    } else if (p >= 100){
        printf("O preco novo e' R$%.2f",p + (p*0.15));
    }

    return 0;
}
