#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, m, ne;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    m = (2 * n1 + 3 * n2 + 4 * n3 + n4)/10;

    printf("Media: %.1f\n", m);

    if (m >= 7){
        printf("Aluno aprovado.\n");

    } else if ((m >= 5)&&(m <= 6.9)){
        printf("Aluno em exame.\n");

        scanf("%f", &ne);
        printf("Nota do exame: %.1f\n", ne);

        m = (m + ne) / 2;

        if (m >= 5){
            printf("Aluno aprovado.\n");

        } else {
            printf("Aluno reprovado.\n");

        }
        printf("Media final: %.1f\n", m);

    } else {
        printf("Aluno reprovado.\n");
    }
    return 0;
}
