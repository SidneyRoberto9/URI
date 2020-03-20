#include <stdio.h>

void reajuste(int d, int m, int a)
{
    d = d + 5;
    if(d > 31){
        m = m + 1;
        d = d - 31;
        if(m > 12){
            m = m - 13;
            a = a +1;
        }
    }
    printf("%2d/%2d/%4d",d,m,a);
}

int main()
{
    int dia, mes, ano;

    printf("Informe o dia: ");
    scanf("%d", &dia);

    printf("Informe o mes: ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    reajuste(dia, mes, ano);
    return 0;
}
