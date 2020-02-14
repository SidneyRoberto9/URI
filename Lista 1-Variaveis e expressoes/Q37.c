#include <stdio.h>

int main()
{

    float v;

    printf("Informe o valor do produto: ");
    scanf("%f", &v);

    printf("\nO valor do produto com desconto e' %.2f", v - (v * 0.12));

    return 0;
}
