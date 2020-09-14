#include <stdio.h>

int main()
{
    float q, l;

    printf("Digite uma massa em quilogramas: ");
    scanf("%f", &q);

    l = q/ 0.45;

    printf("\nA Massa convertida em libras e' %.2f", l);

    return 0;
}
