#include <stdio.h>

int main()
{
    float vht, h,s;

    printf("Informe O valor da hora de trabalho R$ ");
    scanf("%f", &vht);

    printf("Informe a quantidade de hroas trabalhadas: ");
    scanf("%f", &h);

    s = h *vht;
    s = s + (s * 0.10);

    printf("\nO valor do salario e R$%.2f",s);

    return 0;
}
