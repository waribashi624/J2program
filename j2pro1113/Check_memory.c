#include <stdio.h>
#include <stdlib.h>

#define NUM 100000000

int main(void)
{
  double *pt;
  int i, j;
  char enter;
  
  for (i=0; i<NUM; i++) {
    for (j=0; j<10; j++) {
      pt = (double *)malloc(sizeof(double)*NUM);
    }
    printf("\n");
    printf("stop!\n");
    printf("Please Enter key.\n");
    scanf("%c", &enter); 
  }
  
  return 0;
}
