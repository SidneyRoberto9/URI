#include <stdio.h>

int main()
{
    int A, B, C;

    printf("Informe A, B, C: ");
    scanf("%d %d %d",&A, &B, &C);

    if ((A < B + C) && (B < A + C) && (C < A + B)){
        if ((A==B)&&(B==C)){
            printf("\nE um triangulo equilatero\n");
        } else if ((A==B)||(B==C)||(C==A)){
            printf("\nE um triangulo isosceles\n");
        } else if ((A!=B)&&(B!=C)&&(C!=A)){
            printf("\nE um triangulo escaleno\n");
        }
    }

    return 0;
}
