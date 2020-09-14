#include <stdio.h>

int main()
{
    float baseMa, baseMe, alt, total;

    printf("Informe a base Maior e a base Menor do trapezio: ");
    scanf("%f %f", &baseMa, &baseMe);

    printf("Informe a altura: ");
    scanf("%f",&alt);

    total = ((baseMa + baseMe) * alt)/2;

    if ((baseMa < 0) || (baseMe < 0)) {
        printf("\nValores Invalidos\n");
    } else if ((baseMa < 0) && (baseMe < 0)) {
        printf("\nValores Invalidos\n");
    } else {
        printf("\nA area e' %.2f",total);
    }

    return 0;
}
