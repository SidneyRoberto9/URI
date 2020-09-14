#include <stdio.h>

int main()
{
    int d, m, a;

    scanf("%d/%d/%d", &d, &m, &a);

    if (((d <= 9)&&(d>= 1))&&((m >= 1)&&(m <= 9)) &&((a >= 1)&&(a <= 9))){
        printf("0%d/0%d/0%d\n", m, d, a);
        printf("0%d/0%d/0%d\n", a, m, d);
        printf("0%d-0%d-0%d\n", d, m, a);

    } else if (((m >= 1)&&(m <= 9))&&((d <= 9)&&(d>= 1))){
        printf("0%d/0%d/%d\n", m, d, a);
        printf("%d/0%d/0%d\n", a, m, d);
        printf("0%d-0%d-%d\n", d, m, a);

    } else if (((a >= 1)&&(a <= 9))&&(((m >= 1)&&(m <= 9)))){
        printf("0%d/%d/0%d\n", m, d, a);
        printf("0%d/0%d/%d\n", a, m, d);
        printf("%d-0%d-0%d\n", d, m, a);

    } else if (((a <= 9)&&(a >= 1)) && ((d <= 9)&&(d>= 1))){
        printf("%d/0%d/0%d\n", m, d, a);
        printf("0%d/%d/0%d\n", a, m, d);
        printf("0%d-%d-0%d\n", d, m, a);

    } else if ((a <= 9)&&(a >= 1)){
        printf("%d/%d/0%d\n", m, d, a);
        printf("0%d/%d/%d\n", a, m, d);
        printf("%d-%d-0%d\n", d, m, a);

    } else if ((m <= 9)&&(m >= 1)){
        printf("0%d/%d/%d\n", m, d, a);
        printf("%d/0%d/%d\n", a, m, d);
        printf("%d-0%d-%d\n", d, m, a);

    } else if ((d <= 9)&&(d >= 1)){
        printf("%d/0%d/%d\n", m, d, a);
        printf("%d/%d/0%d\n", a, m, d);
        printf("0%d-%d-%d\n", d, m, a);

    }

    return 0;
}
