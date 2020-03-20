#include <stdio.h>

int main()
{
    int n, a = 2, b = 7, c = 3;

    scanf("%d", &n);

    while(n != 0){
        printf("%d, ",a);
        a = a*2;
        printf("%d, ",b);
        b = b*3;
        printf("%d, ",c);
        c = c*4;


        n--;
    }
    return 0;
}
