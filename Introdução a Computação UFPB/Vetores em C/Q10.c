#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, v[16], vaux[16];

    srand(time(NULL));

    for(i = 0; i< 16; i++){
        v[i] = rand() % 100;
        vaux[i] = v[i];
        printf("%d ",v[i]);
    }

    for(i = 0; i < 8; i++){
        v[i] = vaux[i+8];
        v[i+8] = vaux[i];

    }

    printf("\n");
    for(i = 0; i < 16; i++){
        printf("%d ",v[i]);
    }
    return 0;
}
