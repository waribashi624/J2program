#include <stdio.h>
#include <stdlib.h>

#define SENT "aaaaaaaaa"

int my_strlen(char *str);

int main(void)
{

  char *str = SENT;

  int length;

  length = my_strlen(str);

  printf("length = %d\n",length);

  exit(EXIT_SUCCESS);

}

int my_strlen(char *str)
{
  int len = 0;
  while(*str++)len++;
  return len;
}

