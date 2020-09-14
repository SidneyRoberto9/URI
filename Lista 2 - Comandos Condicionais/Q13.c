#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, total;

    printf("Informe a Primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a Segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a Terceira nota: ");
    scanf("%f", &nota3);

    total = (nota1 + nota2 + (2*nota3))/4;

    printf("\nA media geral do aluno foi %.2f", total);
    if (total >= 6) {
        printf("\nE o aluno foi aprovado.");
    } else {
        printf("\nE o aluno foi reprovado.");
    }

    return 0;
}
