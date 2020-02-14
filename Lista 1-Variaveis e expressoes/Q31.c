#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("\nSeu sucessor %d\nSeu numero %d\nSeu antecessor %d", n + 1, n, n - 1);

    return 0;
}
