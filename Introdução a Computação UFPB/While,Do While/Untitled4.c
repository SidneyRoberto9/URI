#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    while(n!= 0){
        if (n % 3 == 0){
            printf("\nDivisivel por 3 = %d", n);

        } else if (n % 5 == 0){
            printf("\nDivisivel por 5 = %d", n);

        }
        n--;
    }
    return 0;
}
