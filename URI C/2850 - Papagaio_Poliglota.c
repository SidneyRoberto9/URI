#include <stdio.h>
#include <string.h>

int main()
{
    char p[10];

    while(scanf(" %[^\n]", p) != EOF){

        if(strcmp(p, "esquerda") == 0){
        printf("ingles\n");

        }else if(strcmp(p, "direita") == 0){
            printf("frances\n");

        }else if (strcmp(p, "nenhuma") == 0){
            printf("portugues\n");

        }else if (strcmp(p, "as duas") == 0){
            printf("caiu\n");

        }
    }

    return 0;
}
