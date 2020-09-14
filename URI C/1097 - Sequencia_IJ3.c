#include <stdio.h>

int main()
{
    int a, b;

    for (a = 1; a <= 9; a = a + 2){
        for(b = a+6; b > a+3; b--){
            printf("I=%d J=%d\n", a, b);
        }
    }

    return 0;
}
