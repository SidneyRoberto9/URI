#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main()
{
  srand(time(NULL));

  int i, j , som = 0, m = 0, ml, A[TAM][TAM];

  for(i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      A[i][j] = rand() % 100;
      printf("%4d ", A[i][j]);
      som += A[i][j];
    }
    if(som > m){
      m = som;
      ml = i;
    }
    som = 0;
  printf("\n");
  }

  printf("\nMaior linha = %d\nSoma da Linha = %d\n", ml+1,m);
  return 0;
}
