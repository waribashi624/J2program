#include <stdio.h>

void star (int num);

void star (int num)
{
  int i;

  i = 0;
  while (i<num) {
    printf("*");
    i++;
  }
  printf("\n");
}

int main(int num)
{

  star(num);
  
  return 0;
}
