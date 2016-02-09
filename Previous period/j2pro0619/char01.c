#include <stdio.h>
#include <string.h>

int main(void)
{

  char str[255] = "Hello,World!";

  char  *pt;

  pt = &str[0];

  printf("%s\n",str);
  printf("%X\n",str);
  printf("%08X\n",pt);
  printf("%d\n",*pt);
  printf("%c\n",*pt);

  return 0;
}
