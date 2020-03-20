#include <stdio.h>

float ideal(float alt, char sex)
{
    float peso;
    if(sex == 'm'){
        peso = ((62,1 * alt) - 44,7);
        return peso;
    }else if(sex == 'f'){
        peso = ((72,7 * alt) - 58);
        return peso;
    }

}

int main()
{
    float a;
    char s;

    printf("Informe a altura e o sexo (m - masculino, f - feminino): ");
    scanf("%f %c", &a, &s);

    printf("Peso ideal == %.2f",ideal(a,s));
    return 0;
}
