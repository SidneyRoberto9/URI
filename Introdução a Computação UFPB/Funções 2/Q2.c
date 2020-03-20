#include <stdio.h>

int maior(int a, int b)
{
    if (a > b){
        return a;
    } else {
        return b;
    }
}

int main()
{
    int n1 ,n2, m;

    printf("Informe Dois valores: ");
    scanf("%d %d", &n1, &n2);

    m = maior(n1,n2);
    printf("O maior = %d",m);

    return 0;
}
