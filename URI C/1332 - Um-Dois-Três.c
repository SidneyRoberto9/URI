#include <stdio.h>
#include <string.h>

int main()
{
    int n, tam;
    char p[6];

    scanf("%d", &n);

    while(n > 0){
        scanf("%s", &p);
        tam = strlen(p);

        if (tam == 5){
            printf("3\n");

        }else if (((p[0] == 'o') && (p[2] = 'e')) || ((p[0] == 'o') && (p[1] = 'n')) || ((p[2] == 'e') && (p[1] = 'n'))){
            printf("1\n");

        }else if (((p[0] == 't') && (p[2] = 'o')) || ((p[0] == 't') && (p[1] = 'w')) || ((p[2] == 'o') && (p[1] = 'w'))){
            printf("2\n");
        }

        n--;
    }

    return 0;
}
