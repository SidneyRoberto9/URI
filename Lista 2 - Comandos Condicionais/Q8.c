#include <stdio.h>

int main()
{
    float nota1, nota2;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    if (nota1 < 0) {
        printf("Nota1 invalida\n");
    } else if (nota1 > 10) {
        printf("Nota1 invalida\n");
    }

    if (nota2 < 0) {
        printf("Nota2 invalida\n");
    } else if (nota2 > 10) {
        printf("Nota2 invalida\n");
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
