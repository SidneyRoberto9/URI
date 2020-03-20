#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i ,va[10] ,vb[10] ,vc[10];

    srand(time(NULL));

    for(i = 0; i< 10; i++){
        va[i] = rand() % 100;
        vb[i] = rand() % 100;
        if (i % 2 == 0){
            vc[i] = va[i];
        } else {
            vc[i] = vb[i];
        }

    }
    printf("\n");
    for(i = 0; i< 10; i++){
        printf("%d ",vc[i]);
    }

    return 0;
}
