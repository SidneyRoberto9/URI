#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, va[10], vb[10], vc[10];

    srand(time(NULL));

    for(i = 0; i<10; i++){
        va[i] = rand() % 100;
        vb[i] = rand() % 100;
        vc[i] = va[i] + vb[i];
        printf("%d  ", vc[i]);
    }

    return 0;
}
