#include <stdio.h>
#include <stdlib.h>

#define NUM 200000000

int main(void)
{
  double *array;

  array = (double *)malloc(NUM*sizeof(double));
  array[NUM-1] = 0.0;
  
  return 0;
}
