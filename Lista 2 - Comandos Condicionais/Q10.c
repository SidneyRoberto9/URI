#include <stdio.h>

int main()
{
    float alt, peso;
    char sex;

    printf("Informe seu sexo, M(para masculino) e F(para feminino): ");
    scanf("%c", &sex);

    printf("Informe sua altura: ");
    scanf("%f", &alt);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    if (sex == 'm' || sex == 'M') {
        printf("Seu peso ideial e' %.2fKg", (72.7 * alt) - 58);
    } else if (sex == 'f' || sex == 'F') {
        printf("Seu peso ideial e' %.2fKg", (62.1 * alt) - 44.7);
    }

    setbuf(stdin, NULL);
    getchar();
    return 0;
}
