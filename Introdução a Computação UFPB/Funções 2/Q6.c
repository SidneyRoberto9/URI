#include <stdio.h>

void convert(int s)
{
    int h,m;

    m = s / 60;
    s = s % 60;
    h = m / 60;
    m = m % 60;

    printf("%2d:%2d:%2d", h,m,s);
}

int main()
{
    int segundos;

    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    convert(segundos);
    return 0;
}
