#include <stdio.h>

int main()
{
    int esc, quant;

    printf("    CARDAPIO    -- CODIGO -- PRECO \n");
    printf("Cachorro Quente --   100  -- 1.20 \n");
    printf("Bauru Simples   --   101  -- 1.30 \n");
    printf("Bauru com Ovo   --   102  -- 1.50 \n");
    printf("Hamburguer      --   103  -- 1.20 \n");
    printf("Chesseburguer   --   104  -- 1.70 \n");
    printf("Suco            --   105  -- 2.20 \n");
    printf("Refrigerante    --   106  -- 1.00 \n");

    printf("Codigo da refeicao: ");
    scanf("%d", &esc);

    esc = esc - 99;

    printf("Quantidade: ");
    scanf("%d", &quant);

    switch (esc){
        case 1:
            printf("Valor a pagar e' R$%.2f", quant * 1.20);
            break;

        case 2:
            printf("Valor a pagar e' R$%.2f", quant * 1.30);
            break;

        case 3:
            printf("Valor a pagar e' R$%.2f", quant * 1.50);
            break;

        case 4:
            printf("Valor a pagar e' R$%.2f", quant * 1.20);
            break;

        case 5:
            printf("Valor a pagar e' R$%.2f", quant * 1.70);
            break;

        case 6:
            printf("Valor a pagar e' R$%.2f", quant * 2.20);
            break;

        case 7:
            printf("Valor a pagar e' R$%.2f", quant * 1.00);
            break;

        default:
            printf("Codigo invalido");
    }

    return 0;
}
