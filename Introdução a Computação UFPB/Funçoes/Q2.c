#include <stdio.h>

int medidasDoRetangulo(float b, float h)
{
    float A, P;

    A = b * h;
    P = 2 * (b + h);

    printf("Area = %.2f\n", A);
    printf("Perimetro = %.2f\n", P);

}

int main()
{
    float base, altura;

    printf("Informe a Base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    medidasDoRetangulo(base, altura);


    return 0;
}
