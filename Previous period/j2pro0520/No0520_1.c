#include <stdio.h>

void star_space(int num);

int main(void)
{
  int num;

  printf("num=");
  scanf("%d", &num);

  star_space(num);

  return 0;
}
