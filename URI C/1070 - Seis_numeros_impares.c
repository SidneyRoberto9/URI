#include <stdio.h>

int main()
{
    int x, c = 1;

    scanf("%d", &x);

    while (c <= 6){
        if (x % 2 != 0){
            printf("%d\n", x);
            c++;
        }
        x++;
    }

    return 0;
}
