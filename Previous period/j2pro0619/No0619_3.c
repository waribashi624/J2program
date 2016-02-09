#include <stdio.h>
#define seed 25

char my_toupper(char ch);

int main(void)
{

  char str;

  scanf("%c",&str);

  my_toupper(str);

  printf("%c",str);

  return 0;

}

char my_toupper(char ch)
{

  ch = ch + seed;

  return ch;

}
  
  

  
