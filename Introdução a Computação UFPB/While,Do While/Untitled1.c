#include <stdio.h>
#include <windows.h>

int main()
{
    int i = 0,soma = 0;

    do{
       scanf("%d", &i);
       soma += i;

    }while(i!= 0);
    printf("\n A soma de todos os valores: %d", soma);

    return 0;
}
