#include <stdio.h>

int main()
{
    int x, y, i, cont = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y){
        for (i = y + 1; x > i; i++){
            if ((i % 2 == 1)||(i % 2 == -1)){
                cont += i;
            }
        }
    } else {
        for (i = x + 1; y > i; i++){
            if ((i % 2 == 1)||(i % 2 == -1)){
                cont += i;
            }
        }
    }
    printf("%d\n",cont);
    return 0;
}
