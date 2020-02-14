#include <stdio.h>

int main()
{
    float q, l;

    printf("Digite uma massa em libras: ");
    scanf("%f", &l);

    q = l* 0.45;

    printf("\nA Massa convertida em quilogramas e' %.2f", q);

    return 0;
}
