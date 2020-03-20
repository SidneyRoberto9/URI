#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int i, j, k[4][5], m = 0, l, c;

  for(i = 0; i < 4; i++){
    for(j = 0; j < 5; j++){
      k[i][j] = rand() % 1000;
      printf("%3d ", k[i][j]);
      if(k[i][j] > m){
        m = k[i][j];
        l = i;
        c = j;

      }
    }
    printf("\n");
  }
  printf("\nO maior numero da Matriz[%d][%d] = %d\n", l, c, m);
  return 0;
}
