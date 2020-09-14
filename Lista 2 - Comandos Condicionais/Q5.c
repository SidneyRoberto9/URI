#include <stdio.h>

int main()
{
    int num;

    printf("Informe um Numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero %d e' par", num);
    } else {
        printf("O numero %d e' impar", num);
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
