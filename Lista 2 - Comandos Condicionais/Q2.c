#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Informe um Numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("Sua a raiz quadrada de %d e' %.0f", num, sqrt(num));
    } else {
        printf("Esse numero e' invalido");
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
