#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, va[10], m, p = 1;

    srand(time(NULL));

    for(i = 0; i<10;i++){
        va[i] = rand() % 100;
    }
    m = va[0];

    for(i = 0; i<10;i++){
        printf("%d ", va[i]);
    }

    for(i = 1; i<10;i++){
        if (m <= va[i]){
            m = va[i];
            p = i + 1;
        }
    }

    printf("\nMaior = %d\nPosicao = %d", m, p);

    return 0;
}
