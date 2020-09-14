#include <stdio.h>

int main()
{
    float salario, vpe;

    printf("Informe O seu salario: ");
    scanf("%f", &salario);

    printf("Informe o Valor das Prestacoes do imprestimo: ");
    scanf("%f", &vpe);

    if (vpe > (salario + (salario * 0.2))) {
        printf("Emprestimo Nao Concedido");
    } else {
        printf("Emprestimo Concedido");
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
