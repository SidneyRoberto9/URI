#include <stdio.h>

int main()
{
    float valor;
    int estado;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);

    printf("Informe o estado:\n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    printf("5 - outro nao informado\n");
    scanf("%d", &estado);

    switch (estado){
    case 1:
        valor = valor + (valor * 0.07);
        printf("Valor do produto e' %.2f", valor);
        break;

    case 2:
        valor = valor + (valor * 0.12);
        printf("Valor do produto e' %.2f", valor);
        break;

    case 3:
        valor = valor + (valor * 0.15);
        printf("Valor do produto e' %.2f", valor);
        break;

    case 4:
        valor = valor + (valor * 0.08);
        printf("Valor do produto e' %.2f", valor);
        break;

    default:
        printf("Estado invalido Error");
    }


    return 0;
}
