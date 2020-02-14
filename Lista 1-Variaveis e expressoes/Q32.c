#include <stdio.h>

int main()
{
    int n, s;

    printf("Digite um numero: ");
    scanf("%d", &n);

    s = ((3*n)+ 1) + ((2*n)-1);

    printf("\nA Soma equivale a %d",s);

    return 0;
}
