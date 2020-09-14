#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, tam, l, letras[26];
    char frase[1002];

    scanf("%d", &n);
    getchar();

    while(n--){

        memset(letras, 0, 26*sizeof(letras[0]));
        /*memset(varivel char/string, valor pra colocar dentro, tamanho de da variavel em bytes)
            serve basicamente para preencher uma array(eu acho)
         */
        fgets(frase, 1002, stdin);
        tam = strlen(frase);

        for (i = 0; i < tam; i++){
                /* o comnado isalpha() retorna valores 0,1,2
                0 = elemnetos como virgula
                1 = letras  maiusculas
                2 = letras minusculas

                basicamente verifica se ele é do alfabeto ou não.
                  */
            if (isalpha(frase[i])){
                letras[frase[i] - 'a'] = 1;

            }
        }

        for (i = 0, l = 0; i < 26; i++){
             l = l + letras[i];
        }

        if (l == 26){
            printf("frase completa\n");

        } else if (l >= 13) {
            printf("frase quase completa\n");

        } else {
            printf("frase mal elaborada\n");

        }

    }

    return 0;
}
