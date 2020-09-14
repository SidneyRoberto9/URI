#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, h;

    printf("Informe A:");
    scanf("%f", &a);

    printf("Informe B:");
    scanf("%f", &b);

    h = sqrt(pow(a,2) + pow (b,2));

    printf("\nO valor de H e' %.2f", h);

    return 0;
}
