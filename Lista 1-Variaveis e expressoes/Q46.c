#include <stdio.h>

int main()
{
    int n;

    printf("inform um numero inteiro de 3 digitos (de 100 a 999): ");
    scanf("%d", &n);

    printf("\n%d", n % 10);
    printf("%d", ((n % 100) - (n % 10))/10);
    printf("%d", (n % 1000)/100);
    return 0;
}
