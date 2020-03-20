#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main()
{
  srand(time(NULL));

  int i, j , A[TAM][TAM], D[TAM], sd = 0, b = 2, c = 0;

  for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      A[i][j] = rand() % 100;
      printf("%4d ", A[i][j]);
      if((i+b) == j){
        b = b - 1;
        D[c] = A[i][j];
        sd += A[i][j];
        c++;
      }
    }
    printf("\n");
  }

  printf("\nSoma Diagonal Principal = %d", sd);
  printf("\nNumeros da diagonal inversa\n");
  for(i = 0;i < TAM; i++)printf("D[%d] = %d\n",i, D[i]);

  return 0;
}
