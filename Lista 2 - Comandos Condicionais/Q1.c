#include <stdio.h>

 int main()
 {
     int one, two;

     printf("Informe Um Numero: ");
     scanf("%d", &one);

     printf("Informe Um Numero: ");
     scanf("%d", &two);

     if (one > two) {
        printf("O maior numero e' %d", one);
     } else {
        printf("O maior numero e' %d", two);
     }

     setbuf(stdin, NULL);
     getchar();
     return 0;
 }
