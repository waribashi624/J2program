#include <stdio.h>

int main(void)
{
  char strA[] = "abc";
  char *strP = "xyz";

  printf("strA: %s\n", strA);
  printf("strP: %s\n", strP);
  printf("\n");

  strA[1] = 'X';
  printf("strA:%s\n", strA);

  strP[1] = 'X';
  printf("strP:%s\n", strP);
  
  return 0;
}
      
