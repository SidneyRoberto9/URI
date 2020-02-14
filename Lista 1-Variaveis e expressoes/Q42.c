#include <stdio.h>

int main()
{
    float sb, st;

    printf("Informe o salario-base do funcionario R$ ");
    scanf("%f", &sb);

    st = sb + ( sb *0.05);
    st = st - ( sb *0.07);

    printf("\nSeu salario total e R$%.2f", st);
    return 0;
}
