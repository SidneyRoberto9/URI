#include <stdio.h>

void test(int a ,int b ,int c)
{
    if((a == b) && (a == c) && (b == c)){
        printf("triangulo equilatero");
        return 0;

    } else if(((a == b)&&(a == c))||((b == c)&& (a == b))||((b == c)&&(a == c))){
        printf("triangulo isosceles");
        return 1;

    }else {
        printf("triangulo escaleno");
        return 2;
    }
}


int main()
{
    int n1, n2, n3;

    printf("Informe os Tres lado do triangulo: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    test(n1,n2,n3);
    return 0;
}
