#include <stdio.h>

int main()
{
    int a, b,c = 0;

    while (c != -1){

        scanf("%d", &a);
        scanf("%d", &b);

        if (a==b){
            break;
        } else if (a>b){
            printf("Decrescente\n");
        } else if (b>a){
            printf("Crescente\n");
        }
    }

    return 0;
}
