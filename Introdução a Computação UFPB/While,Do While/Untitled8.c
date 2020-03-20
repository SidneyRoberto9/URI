#include <stdio.h>

int main()
{
    int s,f = 0, co , cb, i, mi = 0;
    float mb = 0;
    do{
        printf("\nPara sair dor programa escreva -1 na idade");
        printf("\nInforme os dados de acordo com os numeros");
        printf("\nSexo 1 - Masculino, 2 - feminino = ");

        scanf("%d", &s);
        if(s == 2)f +=1;

        printf("\nCor dos olhos 1 - Azuis, 2 - Verdes, 3 - Castanhos = ");
        scanf("%d", &co);

        printf("\nCor dos cabelos 1 - Loiros, 2 - Castanhos, 3 - Pretos = ");
        scanf("%d", &cb);

        printf("Idade: ");
        scanf("%d", &i);
        if (i > mi)mi = i;

        if (co == 2 && cb == 1)mb += 1;

    }while (i != -1);
    mb = (float) (mb*100)/f;
    printf("\nA maior idade dos habitantes = %d", mi);
    printf("\nA porcentagem de individuos do sexo feminino = %f ",mb);

    return 0;
}
