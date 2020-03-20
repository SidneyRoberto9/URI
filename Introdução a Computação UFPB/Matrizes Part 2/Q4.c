#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main()
{
  srand(time(NULL));

  int i, j , A[TAM][TAM], t[TAM][TAM];

  printf("Matriz de entrada:\n");
  for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      A[i][j] = rand() % 100;
      printf("%4d ", A[i][j]);
    }
    printf("\n");
  }

 printf("\nMatriz Transposta:\n");
  for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      t[i][j] = A[j][i];
      printf("%4d ", t[i][j]);
    }
    printf("\n");
  }


  return 0;
}
