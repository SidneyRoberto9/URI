#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero de 4 digitos(de 1000 a 9999):");
    scanf("%d", &n);

    printf("\n%d",(n % 10000)/1000);
    printf("\n%d",(n % 1000)/100);
    printf("\n%d",(n % 100)/10);
    printf("\n%d\n",n % 10);

    return 0;
}
