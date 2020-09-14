#include <stdio.h>

int main()
{
    int x, c = 1;

    scanf("%d", &x);

    while (c <= x){
        if (c % 2 == 0){
            printf("%d^2 = %d\n",c ,c * c);
        }
        c++;
    }

    return 0;
}
