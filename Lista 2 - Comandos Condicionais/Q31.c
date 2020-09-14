#include <stdio.h>

int main()
{
    float alt, peso;

    printf("Informe altura: ");
    scanf("%f", &alt);

    printf("Informe peso: ");
    scanf("%f", &peso);

    if ((alt < 1.2)&&(peso < 60)){
        printf("Sua classificacao e' tipo A");

    } else if (((alt >= 1.2)&&(alt <= 1.7))&&((peso >= 60)&&(peso <= 90))){
        printf("Sua classificacao e' tipo E");

    } else if ((alt < 1.2)&&((peso >= 60)&&(peso <= 90))){
        printf("Sua classificacao e' tipo D");

    } else if ((alt < 1.2)&&(peso > 90)){
        printf("Sua classificacao e' tipo G");

    } else if (((alt >= 1.2)&&(alt <= 1.7))&&(peso < 60)){
        printf("Sua classificacao e' tipo B");

    } else if ((alt > 1.7)&&(peso < 60)){
        printf("Sua classificacao e' tipo C");

    } else if ((alt > 1.7)&&((peso >= 60)&&(peso <= 90))){
        printf("Sua classificacao e' tipo F");

    } else if (((alt >= 1.2)&&(alt <= 1.7))&&(peso > 90)){
        printf("Sua classificacao e' tipo H");

    } else if ((alt > 1.7)&&(peso > 90)){
        printf("Sua classificacao e' tipo I");
    }
    return 0;
}
