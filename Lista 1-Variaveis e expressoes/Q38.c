#include <stdio.h>

int main()
{
    float salario;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    printf("\nO salario com aumento e' %.2f", salario + (salario *0.25));

    return 0;
}
