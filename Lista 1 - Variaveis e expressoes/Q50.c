#include <stdio.h>

int main()
{
    int i, ano;

    printf("Informe sua Idade: ");
    scanf("%d", &i);

    printf("Informe o Ano atual: ");
    scanf("%d", &ano);

    printf("\nVoce nasceu em %d",ano -i);

    return 0;
}
