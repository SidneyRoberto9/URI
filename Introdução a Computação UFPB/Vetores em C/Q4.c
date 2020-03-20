#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, v[10];

    srand(time(NULL));

    for(i = 0; i< 10; i++){
        v[i] = rand() % 9;
    }
     for(i = 0; i< 10; i++){
        printf("%d ",v[i]);
    }

    printf("\n");
    for(i = 0; i< 10; i++){
        if( i % 2 != 0)v[i] = v[i]*15;
        printf("%d ",v[i]);
    }


    return 0;
}
