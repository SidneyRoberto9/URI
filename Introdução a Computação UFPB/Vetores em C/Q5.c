#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, v[10];

    srand(time(NULL));

    for(i = 0; i<10 ;i++){
        if(i %2 == 0){
            v[i] = 0;
        } else {
            v[i] = 1;
        }
        printf("%d ", v[i]);
    }

    return 0;
}
