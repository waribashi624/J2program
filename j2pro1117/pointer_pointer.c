#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int **pta;
  int x, y, z;
  int i;

  x = 1;
  y = 2;
  z = 3;

  pta = (int **)malloc(3*sizeof(int *));
  pta[0] = &x;
  pta[1] = &y;
  pta[2] = &z;
  
  for (i=0; i<3; i++) {
    printf("%d\n", *pta[i]);
  }
  
  for (i=0; i<3; i++) {
    *pta[i] *= 5;
  }

  printf("%d, %d, %d\n", x, y, z);
  
  return 0;
}
      
