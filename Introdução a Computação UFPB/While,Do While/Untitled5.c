#include <stdio.h>

int main()
{
    int n, peso = 0, id = 0, a = 0, mg, idg, mm, idm;

    scanf("%d", &n);

    do{
        printf("\nBoi %d", n);
        printf("\nPeso = ");
        scanf("%d", &peso);
        printf("ID = ");
        scanf("%d", &id);

        if(peso > a){
            idg = id;
            mg = peso;
        }
        if (peso < a){
            idm = id;
            mm = peso;
        }
        a = peso;

        n--;
    }while(n != 0);

    printf("\nO Mais gordo peso:%d  id:%d", mg,idg);
    printf("\nO Mais magro peso:%d  id:%d", mm,idm);
    return 0;
}
