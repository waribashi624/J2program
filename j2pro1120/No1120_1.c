#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int people;
  int num;
  int i;

  char** mat;

  printf("人数:"); scanf("%d",&people);
  
  mat = (char**)malloc(sizeof(char*)*people);
  
  for(i = 0;i < people;i++){
    printf("User%d 文字数:",i+1); scanf("%d",&num);
    mat[i] = (char*)malloc(sizeof(char)*num);
    printf("Name:");
    fflush(stdin);
    printf("chk\n");
    fgets(mat[i],num,stdin);
    printf("chk\n");
  }

  for(i = 0;i < people;i++){
    printf("%s",mat[i]);
  }

  exit(EXIT_SUCCESS);
}
