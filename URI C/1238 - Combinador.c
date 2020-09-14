#include <stdio.h>
#include <string.h>

int main()
{
    int N, n, i, j;
    char str1[51], str2[51], resultado[101];
    int tam1, tam2;

    scanf("%d", &N);

    for (n = 0; n < N; n++) {
        scanf("%s %s", str1, str2);

        tam1 = strlen(str1);
        tam2 = strlen(str2);

        for (i = 0, j = 0; i < tam1 && i < tam2; i++, j += 2) {
            resultado[j] = str1[i];
            resultado[j + 1] = str2[i];
        }

        for (; i < tam1; i++, j++){
            resultado[j] = str1[i];
        }

        for (; i < tam2; i++, j++){
             resultado[j] = str2[i];
        }

        resultado[j] = '\0';

        printf("%s\n", resultado);
    }

    return 0;
}
