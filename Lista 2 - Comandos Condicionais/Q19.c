#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if ((num % 3 == 0)||(num % 5 ==0)){
        printf("ele e");
    } else {
        printf("nao e");
    }

    return 0;
}
