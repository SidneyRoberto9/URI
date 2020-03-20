#include <stdio.h>

int fat(int v)
{
    if ((v == 1) || (v == 0)){
        return 1;
    } else {
        return fat(v-1)* v;
    }
}

int s(int n)
{
    int som;

    som += 1/fat(n);
    printf("%d",som);
}

int main()
{
    int valor;
    scanf("%d",&valor);
    s(valor);
    return 0;
}
