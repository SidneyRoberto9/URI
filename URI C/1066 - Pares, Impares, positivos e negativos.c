#include <stdio.h>

int main()
{
    int l = 5, n, par = 0, impar = 0, posi = 0, nega = 0;

    while (l > 0){
        scanf("%d", &n);

        if (n % 2 == 0){
            par = par + 1;

        } else if ((n % 2 == 1)||(n % 2 == -1)){
            impar = impar + 1;

        }
        if (n > 0){
            posi = posi + 1;

        } else if (n < 0) {
            nega = nega + 1;

        }
        l--;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", posi);
    printf("%d valor(es) negativo(s)\n", nega);

    return 0;
}
