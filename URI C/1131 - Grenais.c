#include <stdio.h>

int main()
{
    int gremio, inter, gw = 0, iw = 0, emp = 0, sair = 0, cont = 0;

    while (sair != 2){
        scanf("%d %d", &inter, &gremio);

        if (gremio == inter){
            emp = emp + 1;
        } else if (gremio > inter){
            gw = gw + 1;
        } else if (inter > gremio){
            iw = iw + 1;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &sair);
        cont++;
    }
    printf("%d grenais\n", cont);
    printf("Inter:%d\n", iw);
    printf("Gremio:%d\n", gw);
    printf("Empates:%d\n", emp);

    if (gw == iw){
        printf("Nao houve vencedor\n");
    } else if (gw > iw){
        printf("Gremio venceu mais\n");
    } else if (iw > gw){
        printf("Inter venceu mais\n");
    }

    return 0;
}
