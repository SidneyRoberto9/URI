#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500], senha[] = {"teste\n"};
    int t = 0;

    while(1){

        fgets(frase, 500, stdin);

        if(strcmp(frase, senha) == 0){
            system("cls");
            printf("Acesso permitido!!\n");
            printf("Com %d tetativas",t);
            break;

        }else{
            printf("Acesso negado!!\n");
            t++;
        }

    }

    return 0;
}
