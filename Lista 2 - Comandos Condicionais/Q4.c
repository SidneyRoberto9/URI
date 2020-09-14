#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O seu numero ao quadrado e': %d\n", num * num);
        printf("A raiz quadrada do seu numero e': %f", sqrt(num));
    } else {
        printf("Ele nao e' positivo");
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
