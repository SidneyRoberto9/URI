#include <stdio.h>

int main()
{
    int idade, tpds;

    printf("Informe a idade e o tempo de servico: ");
    scanf("%d %d", &idade, &tpds);

    if ((idade >= 65)|| (tpds >= 30) ||((idade >= 60) && (tpds >= 25))){
        printf("\nPode se aposentar\n");
    } else {
        printf("\nNao Pode se Aposentar\n");
    }

    return 0;
}
