#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int row,col;
  int r,c;
  int **array;
  int n;

  printf("行数:"); scanf("%d", &row);
  printf("列数:"); scanf("%d", &col);

  array = (int**)malloc(sizeof(int*)*row);

  for(r = 0;r < row;r++){
    array[r] = (int*)malloc(sizeof(int)*col);
  }

  n = 1;

  for(r = 0;r < row;r++){
    for(c = 0;c <col;c++){
      array[r][c] = n;
      n++;
    }
  }

  for(r = 0;r < col;r++){
    for(c = 0;c < col;c++){
      printf("%3d",array[r][c]);
    }
    printf("\n");
  }

  exit(EXIT_SUCCESS);
}
