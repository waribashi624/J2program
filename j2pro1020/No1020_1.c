#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int array[10];
  int *pt = array;
  int i;

  for(i = 0;i < 10;i++){
    *pt++ = 0;
  }

  for(i = 0;i < 10;i++){
    printf("%d",array[i]);
  }

  exit(EXIT_SUCCESS);

}
    
