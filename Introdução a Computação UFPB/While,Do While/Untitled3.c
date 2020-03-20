#include <stdio.h>

int main()
{
    int  i, n = 0,j;

    for (i = 0; i < 5; i++){
        scanf("%d", &j);
        if(j < 0)n++;
    }

    printf("\nA quantidade de numeros negativos: %d",n);
    return 0;
}
