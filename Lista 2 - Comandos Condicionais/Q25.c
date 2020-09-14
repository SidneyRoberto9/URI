#include <stdio.h>

int main()
{
    int a, b, c, delta;

    printf("Informe A, B e C de uma equacao de segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b*b) - 4 * a * c;

    if (delta > 0){
        printf("\nDuas Raizes Reais\n");
    } else if (delta < 0) {
        printf("\nNao Existe Raiz\n");
    } else if (delta == 0){
        printf("\nRaiz Unica\n");
    }

    return 0;
}
