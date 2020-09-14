#include <stdio.h>

int main()
{
    int one, two;

    printf("Informe um Numero: ");
    scanf("%d", &one);

    printf("Informe um Numero: ");
    scanf("%d", &two);

    if (one == two) {
        printf("Numeros Iguais");
    } else if (one > two) {
        printf("O numero %d e' maior que %d", one, two);
    } else {
        printf("O numero %d e' maior que %d", two, one);
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
