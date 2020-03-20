#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500], *sp;

    fgets(frase,500,stdin);
    printf("\n");
    sp = strtok(frase," ");

    while(sp != NULL){
        printf("%s\n", sp);
        sp = strtok(NULL," ");
    }

    return 0;
}
