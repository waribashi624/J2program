#include <stdio.h>

int main(void)
{
  int a, b;
  double c;

  a = 1;
  b = 2;

  c = a/b;
  printf("c=%f\n", c);
  
  c = (double)a/b;
  printf("c=%f\n", c);

  c = a/(double)b;
  printf("c=%f\n", c);

  c = (double)(a/b);
  printf("c=%f\n", c);

  return 0;
}
