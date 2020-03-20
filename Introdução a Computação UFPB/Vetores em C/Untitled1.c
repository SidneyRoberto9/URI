#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, v[10];

    srand(time(NULL));//srand para mudar a semente, não repetir os numeros, e o time(NULL) serve para atualizar o tempo
    for(i = 0; i<10 ;i++){
        v[i] = rand() % 10;//rand gera um numero aleatorio o % e o valor diz o intervalo apartir do zero
    }

    for(i = 0; i< 10; i++){
        printf("%d  ",v[i]);

    }

}
