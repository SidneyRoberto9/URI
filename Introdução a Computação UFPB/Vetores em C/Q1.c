#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, va[10], soma = 0;

    srand(time(NULL));

    for(i = 0; i< 10; i++){
        va[i] = rand() % 100;
        soma += va[i];
    }
    for(i = 0; i< 10; i++){
        printf("%d ",va[i]);
    }

    printf("\nA soma de todos os elemento e %d", soma);

    return 0;
}
