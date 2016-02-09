#include <stdio.h>

void star_space(int num)
{

  int tmp = num;
  int i;
  int j;

  for(i = num;i != 0;i--){
    for(j = tmp;j != 0;j--){
      printf(" ");
    }
    printf("*\n");
    tmp = tmp - 1;
  }

}
    
