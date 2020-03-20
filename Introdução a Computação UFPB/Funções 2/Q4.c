#include <stdio.h>

void desenhar(char c, int linhas)
{
    int i, j;

    for (i = 0; i < linhas;i++){
        for(j = 0; j < 100; j++){
           printf("%c",c) ;
        }
        printf("\n");
    }
}

int main()
{
   int letra,l;

    printf("Informe um Caracter: ");
    scanf("%c", &letra);

    printf("Informe a quantidade de linhas: ");
    scanf("%d", &l);

    desenhar(letra, l);

    return 0;
}
