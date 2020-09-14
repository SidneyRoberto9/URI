#include <stdio.h>

int main()
{
    int a, b;
    float c, s;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);

    s = b * c;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", s);

    return 0;
}
