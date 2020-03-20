#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j = 9, va[10], vb[10];

    srand(time(NULL));

    for(i = 0; i< 10; i++){
        va[i] = rand() % 100;
    }
    for(i = 0; i< 10; i++){
        vb[j] = va[i];
        j--;
    }

    for(i = 0; i< 10; i++){
        printf("%d ",vb[i]);
    }

    return 0;
}
