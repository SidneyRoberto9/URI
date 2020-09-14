#include <stdio.h>

int main()
{
    float altd, altu, alt ,d = 1;

    printf("Informe a altura do degrau da escada: ");
    scanf("%f",& altd);
    alt = altd;
    printf("Informe a altura que o usuario deseja chegar: ");
    scanf("%f",& altu);

    while(altu> alt){
        alt += altd;
        d++;
    }

    printf("\nSao nescessarios %.2f degraus", d);

    return 0;
}
