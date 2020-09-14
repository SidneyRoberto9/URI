#include <stdio.h>
#include <math.h>

int cal(int x, int y)
{
    int rafa, beto, carlos;

    rafa = pow(3*x,2) + pow(y,2);
    beto = 2*pow(x,2) + pow(5*y,2);
    carlos = -100*x + pow(y,3);

    if ((rafa > carlos) && (rafa > beto))
        printf("Rafael ganhou\n");
    else if ((beto > carlos) && (beto > rafa))
        printf("Beto ganhou\n");
    else if ((carlos > rafa)&&(carlos > beto))
        printf("Carlos ganhou\n");

}

int main()
{
    int cas, x ,y;

    scanf("%d", &cas);

    while (cas > 0){
        scanf("%d", &x);
        scanf("%d", &y);

        cal(x,y);
        cas--;
    }
    return 0;
}
