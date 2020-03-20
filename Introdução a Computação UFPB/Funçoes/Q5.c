#include <stdio.h>


int converter(int s)
{
    int m, h;

    m = s / 60;
    s = s % 60;
    h = m / 60;
    m = m % 60;

    printf("%2d:%2d:%2d", h, m, s);
}

int main()
{
    int s;

    printf("Informe uma quantidade de Segundos: ");
    scanf("%d",&s);

    converter(s);

    return 0;
}
