#include <stdio.h>
#include <string.h>

int a(char S1[], char S2[])
{
    int c, i, j;
    char C[30];

    for(i = 0; i < strlen(S1); i++){
        for(j = 0; j < strlen(S2); j++){
           if (S1[i] == S2[j]){
                C[i] = S1[i];
                break;
            }
        }
    }
    printf("\nA) Elementos Comuns");
    for(i = 0; i < strlen(C); i++){
        printf("\nVetor[%d] = %c",i, C[i]);
    }
}

int b(char S1[], char S2[])
{
    int c = 0, i, j;
    char C[30];

    for(i = 0; i < strlen(S1); i++){
        for(j = 0; j < strlen(S2); j++){
            if (S1[i] == S2[j]){
                break;
            }
            if (j == strlen(S2)-1){
                C[c] = S1[i];
                c++;
            }
        }
    }

    printf("\nB) Elementos de A que nao pertencem a B");
    for(i = 0; i < strlen(C); i++){
        if((C[i]>= 65) && (C[i] <=122)){
            printf("\nVetor[%d] = %c",i, C[i]);
        }else{
            printf("\n...");
        }

    }
}

int main()
{
    char c1[30], c2[30];

    printf("Informe a frase de A: ");
    fgets(c1, 30, stdin);

    printf("Informe a frase de B: ");
    fgets(c2, 30, stdin);

    a(c1,c2);
    b(c1,c2);

    return 0;
}
