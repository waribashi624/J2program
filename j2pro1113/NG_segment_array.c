#include <stdio.h>

#define NUM 3
#define NUM_MAX 5

int main(void)
{
  int array[NUM];
  int i;

  for (i=0; i<NUM_MAX; i++) {
    array[i] = i;
  }
  
  for (i=0; i<NUM_MAX; i++) {
    printf("[%d]=%d\n", i, array[i]);
  }

  return 0;
}

