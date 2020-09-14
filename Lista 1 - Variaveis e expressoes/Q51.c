#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, d;

    printf("Informe o X: ");
    scanf("%d", &x);

    printf("Informe o Y: ");
    scanf("%d", &y);

    d = sqrt((pow(x-0,2)+(pow(y-0,2))));

    printf("\nSua distancia da origem e %d",d);
    return 0;
}
