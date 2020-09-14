#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Informe um numero: ");
    scanf("%f", &num);

    if (num >= 0) {
        printf("Sua Raiz quadrada e' %f", sqrt(num));
    } else {
        printf("Seu Numero ao quadrado e' %f", num * num);
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
