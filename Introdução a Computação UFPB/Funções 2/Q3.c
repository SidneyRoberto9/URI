#include <stdio.h>

int maior(int a, int b, int c)
{
    if ((a > b) && (a > c)){
        return a;
    } else if ((b > a) && (b > c)){
        return b;
    } else {
        return c;
    }
}

int main()
{
    int n1 ,n2,n3, m;

    printf("Informe Tres valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    m = maior(n1,n2,n3);
    printf("O maior = %d",m);

    return 0;
}
