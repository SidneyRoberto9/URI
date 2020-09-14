#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, total;

    printf("Informe a nota do Trabalho de Laboratorio: ");
    scanf("%f", &nota1);

    printf("Informe a nota da Avaliacao semestral: ");
    scanf("%f", &nota2);

    printf("Informe a nota do Exame final: ");
    scanf("%f", &nota3);

    total = ((2*nota1)+(3*nota2)+(5*nota3))/10;

    if (total <= 2.9){
        printf("O aluno foi reprovado com media %.2f",total);
    } else if (total <= 4.9 && total > 2.9){
        printf("O aluno foi para a recuperacao com media %.2f",total);
    } else {
        printf("O aluno foi aprovado com media %.2f",total);
    }
    return 0;
}
