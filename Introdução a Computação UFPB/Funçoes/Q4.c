#include <stdio.h>
#include <string.h>

int busca(char c,const char* p)
{
    int i,a = 100;

    for(i = 0; i < strlen(p); i++){
        if(c == p[i]){
            a = i;
            break;
        }
    }

    if (a != 100){
        return a;
    } else {
        return -1;
    }

}

int main()
{
    char p[30], l, indice;

    printf("Informe uma Palavra: ");
    fgets(p,30,stdin);

    printf("Informe a letra que quer buscar: ");
    scanf("%c", &l);

    indice = busca(l,p);

    printf("\nO indice da letra e %d", indice);

    return 0;
}
