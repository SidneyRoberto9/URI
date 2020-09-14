#include <stdio.h>

int main()
{
    short int n100, n50, n20, n10, n5, n2;
    short int m1, m050, m025, m010, m005, m001;
    float valor1;

    scanf("%f", &valor1);

    //notas:
    n100 = valor1 / 100;
    valor1 = valor1 - (n100 * 100);
    n50 = valor1 / 50;
    valor1 = valor1 - (n50 * 50);
    n20 = valor1 / 20;
    valor1 = valor1 - (n20 * 20);
    n10 = valor1 / 10;
    valor1 = valor1 - (n10 * 10);
    n5 = valor1 / 5;
    valor1 = valor1 - (n5 * 5);
    n2 = valor1 / 2;
    valor1 = valor1 - (n2 * 2);

    //moedas:
    m1 = valor1 / 1;
    valor1 = valor1 - (m1 * 1);
    m050 = valor1 / 0.5;
    valor1 = valor1 - (m050 * 0.5);
    m025 = valor1 / 0.25;
    valor1 = valor1 - (m025 * 0.25);
    m010 = valor1 / 0.1;
    valor1 = valor1 - (m010 * 0.1);
    m005 = valor1 / 0.05;
    valor1 = valor1 - (m005 * 0.05);
    m001 = (valor1 / 0.01) + 0.01;
    valor1 = valor1 - (m001 * 0.01);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m050);
    printf("%d moeda(s) de R$ 0.25\n", m025);
    printf("%d moeda(s) de R$ 0.10\n", m010);
    printf("%d moeda(s) de R$ 0.05\n", m005);
    printf("%d moeda(s) de R$ 0.01\n", m001);

    return 0;
}
