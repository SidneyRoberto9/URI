#include <stdio.h>

int main()
{
    int q, x, in = 0, out = 0;

    scanf("%d", &q);

    while (q > 0){
        scanf("%d", &x);
        if ((x >= 10) && (x <= 20)){
            in += 1;
        } else {
            out += 1;
        }
        q--;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}
