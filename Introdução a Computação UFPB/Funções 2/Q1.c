#include <stdio.h>

int ip(int a){
    if (a % 2 == 0){
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    int n, resultado;

    printf("Informe um numero: ");
    scanf("%d", &n);

    resultado = ip(n);

    if (resultado == 0) {
        printf("%d = par", n);
    } else if (resultado == 1){
        printf("%d = impar", n);
    }

    return 0;
}
