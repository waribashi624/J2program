#include <stdio.h>

void swap_wrong(int x, int y)
{
  int tmp;

  tmp = x;
  x = y;
  y = tmp;

}

int main(void)
{
 int a, b;

 a = 5;
 b = 7;
 
 swap_wrong(a, b);
 
 printf("a=%d\n", a);
 printf("b=%d\n", b);

 return 0;
}

