#include <stdio.h>

int main()
{
    int esc, num1, num2;

    printf("Escolha a Opcao:\n");
    printf("1 - Soma de Dois Numeros\n");
    printf("2 - Diferenca entre dois numeros(maior pelo menor) \n");
    printf("3 - Produto entre dois numeros\n");
    printf("4 - Divisao entre Dois numeros(denominador nao pode ser zero)\n");
    printf("opcao: ");
    scanf("%d", &esc);

    switch (esc){
    case 1:
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("\nSoma = %d",num1 +num2);
        break;

    case 2:
        scanf("%d", &num1);
        scanf("%d", &num2);
        if (num1 > num2) {
            printf("\nDiferenca = %d",num1-num2);
            break;
        } else {
            printf("\nDiferenca = %d",num1-num2);
            break;
        }

    case 3:
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("\nProduto = %d",num1*num2);
        break;

    case 4:
        scanf("%d", &num1);
        scanf("%d", &num2);

        if (num2 != 0){
            printf("\nDivisao = %d",num1/num2);
            break;
        } else {
            printf("termos invalidos");
            break;
        }
    }

    return 0;
}
