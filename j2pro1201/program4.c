#include <stdio.h>

int main(void)
{
  int num;
  double *p;

  printf("num:");
  scanf("%d", &num);

  p = (double *)malloc(sizeof(double)*num);

  free(*p);

  return 0;
}
