#include <stdio.h>
#include <string.h>

int main()
{
    char frase[500], *sp;

    fgets(frase, 500, stdin);

    sp = strtok(frase," ");

    while(sp != NULL){
        sp[0] = toupper(sp[0]);
        printf("%s ", sp);
        sp = strtok(NULL," ");
    }
    return 0;
}
