#include <stdio.h>

int main()
{
    int a, b, d, e;
    float c, f, t;

    scanf("%d%d%f", &a, &b, &c);
    scanf("%d%d%f", &d, &e, &f);

    t = (b * c + e * f);

    printf("VALOR A PAGAR: R$ %.2f\n", t);

    return 0;
}
