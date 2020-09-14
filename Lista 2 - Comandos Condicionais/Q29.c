#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, b1, a2, b2, a3, b3, a4, b4, a5, b5;
    int r;

    a1 = rand() % 100;
    a2 = rand() % 100;
    a3 = rand() % 100;
    a4 = rand() % 100;
    a5 = rand() % 100;

    b1 = rand() % 100;
    b2 = rand() % 100;
    b3 = rand() % 100;
    b4 = rand() % 100;
    b5 = rand() % 100;

    printf("1. %d + %d = ",a1,b1);
    scanf("%d", &r);

    if (r == (a1+b1)){
        printf("Resposta Correta\n");
    } else {
        printf("Resposta Errada a correta seria %d",a1+b1);
    }
    printf("\n");
    printf("2. %d + %d = ",a2,b2);
    scanf("%d", &r);

    if (r == (a2+b2)){
        printf("Resposta Correta\n");
    } else {
        printf("Resposta Errada a correta seria %d",a2+b2);
    }
    printf("\n");
    printf("3. %d + %d = ",a3,b3);
    scanf("%d", &r);

    if (r == (a3+b3)){
        printf("Resposta Correta\n");
    } else {
        printf("Resposta Errada a correta seria %d",a3+b3);
    }
    printf("\n");
    printf("4. %d + %d = ",a4,b4);
    scanf("%d", &r);

    if (r == (a4+b4)){
        printf("Resposta Correta\n");
    } else {
        printf("Resposta Errada a correta seria %d",a4+b4);
    }
    printf("\n");
    printf("5. %d + %d = ",a5,b5);
    scanf("%d", &r);

    if (r == (a5+b5)){
        printf("Resposta Correta\n");
    } else {
        printf("Resposta Errada a correta seria %d",a5+b5);
    }
    return 0;
}
