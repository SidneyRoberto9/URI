#include <stdio.h>

int medidasDoRetangulo(float b, float h)
{
    float A, P;

    A = b * h;
    P = 2 * (b + h);

    printf("Area = %.2f\n", A);
    printf("Perimetro = %.2f\n", P);

    if (b == h){
        return 1;
    } else {
        return 0;
    }

}

int main()
{
    float base, altura, t;

    printf("Informe a Base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    t = medidasDoRetangulo(base, altura);

    if (t == 1){
        printf("E um Retangulo Quadrado!!\n");

    } else if (t == 0){
        printf("Nao e um Retangulo Quadrado!!\n");
    }


    return 0;
}
