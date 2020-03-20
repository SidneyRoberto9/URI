#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, va[10], soma = 0, q = 0;

    srand(time(NULL));

    for(i = 0; i< 10; i++){
        va[i] = rand() % 100;
        soma += va[i];
    }
    soma = soma /10;

    for(i = 0; i< 10; i++){
        printf("%d ",va[i]);
        if (va[i] > soma)q++;
    }
    printf("\nA quantidade de todos os elemento acima da media e %d\nSendo a media %d", q, soma);

    return 0;
}
