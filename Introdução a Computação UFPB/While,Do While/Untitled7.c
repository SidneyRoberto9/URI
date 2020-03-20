#include <stdio.h>

int main()
{
    float m, tempo= 0;

    scanf("%f", &m);

    do{
        m = m/2;
        tempo += 50;

    }while(m >= 0.5);

    printf("\nO tempo nescessario e %.0f segundos", tempo);
    printf("\nA massa final e de: %.2f",m);
    return 0;
}
