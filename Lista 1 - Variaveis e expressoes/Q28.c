#include <stdio.h>
#include <math.h>

int main()
{
    int v1, v2 ,v3 , s;

    printf("Informe 3 Valores: ");
    scanf("%d %d %d", &v1, &v2, &v3);

    s = pow(v1, 2) + pow(v2, 2) + pow(v3, 2);

    printf("\nA Soma dos valores equivale a %d", s);

    return 0;
}
