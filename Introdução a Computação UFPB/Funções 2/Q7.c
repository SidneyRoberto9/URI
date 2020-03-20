#include <stdio.h>
#include <math.h>

void basc(int a, int b ,int c)
{
    int x1,x2, d;

    d = sqrt((b * b) - 4 * (a * c));
    x1 = (- b + d )/(2 * a);
    x2 = (- b - d )/(2 * a);

    printf("Primeira raiz = %d\n",x1);
    printf("Segunda raiz = %d\n",x2);
}

int main()
{
    int n1, n2, n3;

    printf("Informe A,B,C da equação: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    basc(n1,n2,n3);

    return 0;
}
