#include <stdio.h>

int func(int a, int b, int c)
{
    int soma = 0;

    if(a < 1){
        printf("O valor de A e menor que 1!!");
        return 0;
    }

    if(b > c){
        for (; c <= b; c++){
            soma += c;
        }
        return soma;

    } else if (c > b){
        for (; b <= c; b++){
            soma += b;
        }
        return soma;
    }
}

int main()
{
    int n1, n2, n3, total;

    printf("Informe Tres Numeros inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    total = func(n1,n2,n3);

    printf("\nA soma dos elementos = %d",total);
    return 0;
}
