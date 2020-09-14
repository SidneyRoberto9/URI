#include <stdio.h>

int main()
{
    float peso,alt,imc;

    printf("Informe seu Peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &alt);

    imc = peso / (alt * alt);

    if (imc < 18.5){
        printf("\nAbaixo do Peso\n");

    } else if ((imc > 18.6)&&(imc < 24.9)){
        printf("\nSaudavel\n");

    } else if ((imc > 25)&&(imc < 29.9)){
        printf("\nPeso em excesso9\n");

    } else if ((imc > 30)&&(imc < 34.9)){
        printf("\nObesidade Grau I\n");

    } else if ((imc > 35)&&(imc < 39.9)){
        printf("\nObesidade Grau II\n");

    } else if (imc >= 40){
        printf("\nObesidade Grau III\n");

    }

    return 0;
}
