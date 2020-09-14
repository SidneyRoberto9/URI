#include <stdio.h>

int main()
{
    double a, b, m;

    scanf("%lf", &a);
    scanf("%lf", &b);

    m = (3.5 * a + 7.5 * b)/11;

    printf("MEDIA = %.5lf\n", m);

    return 0;
}
