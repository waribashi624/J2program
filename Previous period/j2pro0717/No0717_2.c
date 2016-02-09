#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char bar[100];
  
  scanf("%s",bar);
  
  int sum = 0;
  int len;

  len = strlen(bar);

  while(len--)
    sum += (int)bar[len] - '0';

  printf("%d",sum);

  return 0;

}
