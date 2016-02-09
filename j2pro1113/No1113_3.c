#include <stdio.h>
#include <stdlib.h>

/* 0 は爆弾　他はsomethig*/


int main(void)
{

  int Vertical;
  int Horizontal;
  int i;int n;

  srand((unsigned)time(NULL));

  printf("縦:");scanf("%d",&Vertical);
  printf("横:");scanf("%d",&Horizontal);

  int** matrix;
  
  matrix = (int**)malloc(sizeof(int*)*Vertical);
  
  for(i = 0;i < Vertical;i++){
    matrix[i] = (int*)malloc(sizeof(int)*Horizontal);
  }

  for(i = 0;i < Vertical;i++){
    for(n = 0;n < Horizontal;n++){
      matrix[i][n] = rand()%3;
      if(matrix[i][n] == 0){
	printf("*");
      }else{
	printf(" ");
      }
    }
    printf("\n");
  }
  exit(EXIT_SUCCESS);

}
      
  
