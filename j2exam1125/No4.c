#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int num;
  double* array;

  printf("num:"); scanf("%d",&num);

  array = (double*)malloc(sizeof(double)*num);

  free(array);

  exit(EXIT_SUCCESS);

}
