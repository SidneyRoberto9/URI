#include <stdio.h>

int main()
{
    char nome[61];
    double a, b, t;

    scanf("%s", &nome);
    scanf("%lf", &a);
    scanf("%lf", &b);

    t = a + (b * 0.15);

    printf("TOTAL = R$ %.2lf\n", t);

    return 0;
}
