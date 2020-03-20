#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fat(int v)
{
    if ((v == 1) || (v == 0)){
        return 1;
    } else {
        return fat(v-1)* v;
    }
}

int vetorfat(int A[], int B[])
{
    int i, n;

    for(i = 0; i < 10; i++){
        n = A[i];
        B[i] = fat(n);
    }

}

int main()
{
    srand(time(NULL));

    int i, A[10], B[10];

    memset(B,0,10);
    for(i = 0; i < 10;i++){
        A[i] = rand() % 10;
    }

    vetorfat(A,B);

    for(i = 0; i < 10;i++){
        printf("A[%d] = %d  B[%d] = %d\n", i, A[i], i, B[i]);

    }

    return 0;
}
