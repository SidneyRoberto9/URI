#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int m[n], i, a, p;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }

    a = m[0];

    for (i = 0; i < n; i++)
    {
        if (m[i] < a){
            a = m[i];
            p = i;
        }
    }

    printf("Menor valor: %d\n", a);
    printf("Posicao: %d\n", p);

    return 0;
}
