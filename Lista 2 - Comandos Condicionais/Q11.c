#include <stdio.h>

int main()
{
    int num, v1, v2, v3;

    printf("Informe um Numero inteiro positivo(de 3 algarismos): ");
    scanf("%d", &num);

    if (num < 0 ){
        printf("\nNumero Invalido\n");
    } else {
        v3 = num % 10;
        v2 = (num/10) % 10;
        v1 = (num/100) % 10;

        printf("Sua Soma e': %d",v1 + v2 +v3);
    }
    return 0;
}
