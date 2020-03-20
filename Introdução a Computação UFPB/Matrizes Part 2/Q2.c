#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int i,j ,A[3][3],sd = 0, D[3];

  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      A[i][j] = rand() % 10;
      printf("%4d ", A[i][j]);
    }
    printf("\n");
  }

  for(i = 0; i < 3; i++){
    D[i] = A[i][i];
    sd += A[i][i];
  }

  printf("\nSoma Diagonal Principal = %d", sd);
  printf("\nNumeros da diagonal\n")
  for(i = 0;i < 3; i++){
    printf("D[%d] = %d\n",i, D[i]);
  }


  return 0;
}
