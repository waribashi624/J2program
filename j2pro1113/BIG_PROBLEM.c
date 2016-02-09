#include <stdio.h>
#include <stdlib.h>

#define NUM 100000

int main(void)
{
  double *array;
  int i;
  int count;

  count = 0;
  while (count<100000) {
    
    array = (double *)malloc(NUM*sizeof(double));
    
    for (i=0; i<NUM; i++) {
      array[i] = 0.0;
    }
    //free(array);
    
    count++;
  }
  
  return 0;
}
