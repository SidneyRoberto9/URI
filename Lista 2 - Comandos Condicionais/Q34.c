#include <stdio.h>

int main()
{
    float nota;
    int faltas;

    printf("Nota: ");
    scanf("%f", &nota);

    printf("Faltas: ");
    scanf("%d", &faltas);

    if (faltas <= 20){
        if (nota >= 9){
            printf("\nConceito A\n");

        } else if ((nota >= 7.5)&&(nota <= 8.9)){
            printf("\nConceito B\n");

        } else if ((nota >= 5)&&(nota <= 7.4)){
            printf("\nConceito C\n");

        } else if ((nota >= 4)&&(nota <= 4.9)){
            printf("\nConceito D\n");

        } else if (nota <= 3.9){
            printf("\nConceito E\n");

        }
    } else if (faltas > 20){
        if (nota >= 9){
            printf("\nConceito B\n");

        } else if ((nota >= 7.5)&&(nota <= 8.9)){
            printf("\nConceito C\n");

        } else if ((nota >= 5)&&(nota <= 7.4)){
            printf("\nConceito D\n");

        } else if ((nota >= 4)&&(nota <= 4.9)){
            printf("\nConceito E\n");

        } else if (nota <= 3.9){
            printf("\nConceito E\n");

        }
    }

    return 0;
}
