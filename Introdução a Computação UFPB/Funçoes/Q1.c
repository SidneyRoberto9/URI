#include <stdio.h>

int MM(int *a, int *b)
{
    int temp;

    if(*a > *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }

    return *a;
    return *b;

}


int main()
{
    int n1, n2;

    printf("Infome A e B: ");
    scanf("%d %d", &n1,&n2);

    MM(&n1,&n2);
    printf("A = %d\n",n1);
    printf("B = %d\n",n2);

    return 0;
}
