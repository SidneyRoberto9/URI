#include <stdio.h>

int main()
{
    char letra;

    printf("Informe uma letra maiuscula: ");
    scanf("%c", &letra);

    letra = letra + 32;

    printf("\nA sua letra minuscula e %c", letra);

    return 0;
}
