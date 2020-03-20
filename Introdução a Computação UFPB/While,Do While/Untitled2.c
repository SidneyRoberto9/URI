#include <stdio.h>

int main()
{
    int i = 0,soma = 0, q = 0, media = 0;

    do{
        scanf("%d", &i);
        soma += i;
        q++;

    }while(i!= 0);

    media = (float) soma / (q - 1);

    printf("\nA soma de todos os valores: %d", soma);
    printf("\nA Media de todos os valores: %d", media);

    return 0;
}
