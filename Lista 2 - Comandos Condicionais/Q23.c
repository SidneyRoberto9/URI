#include <stdio.h>

int main()
{
    int ano;

    printf("Informe um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
        printf("\n%d e' bissexto\n", ano);
    } else {
        printf("\n%d nao e' bissexto\n", ano);
    }

    return 0;
}
