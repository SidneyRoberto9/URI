#include <stdio.h>

int main()
{
    float m, a;

    printf("Digite um valor de area em acres: ");
    scanf("%f", &a);

    m = a * 4048.58;

    printf("\nO valor de area em metros quadrados e' %f", m);

    return 0;
}
