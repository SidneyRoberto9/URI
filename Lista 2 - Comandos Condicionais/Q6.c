#include <stdio.h>

int main()
{
    int one, two;

    printf("Informe um numero: ");
    scanf("%d", &one);

    printf("Informe um numero: ");
    scanf("%d", &two);

    if (one > two) {
        printf("O numero %d e' maior que %d\n", one, two);
        printf("E a diferenca entre eles e' %d", one - two);
    } else {
        printf("O numero %d e' maior que %d\n", two, one);
        printf("E a diferenca entre eles e' %d", two - one);
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
