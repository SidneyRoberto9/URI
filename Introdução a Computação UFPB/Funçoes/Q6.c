#include <stdio.h>

int v(int n)
{
    int s;

    s = ((n * n) + 1)/ (n + 3);

    return s;

}


int main()
{
    int k, i;

    for(i = 0; i < 1;i++){
        k = v(i);
        printf("\nS = %d",k);

    }

    return 0;
}
