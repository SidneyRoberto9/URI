#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500], pontos[50], alf[] = {"abcdefghijklmnopqwrsxyz"};
    int i, k, j = 0, r = 0;

    fgets(frase, 500, stdin);
    printf("\n");

    for(i = 0; i < 100; i++){
        for(k = 0;k < strlen(frase); k++){
            if(alf[i] == frase[k]){
                r++;
            }

        }
        pontos[j] = r;
        j++;
        r = 0;
    }

    for(j = 0; j< strlen(alf); j++){
        if(pontos[j] >= 2)printf("%c se repetiu %d vezes\n",alf[j], pontos[j]);
    }

    return 0;
}
