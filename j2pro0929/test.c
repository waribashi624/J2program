#include <stdio.h>

int main(void)
{

  char st[] = "hentai";
  char* str = st;
  char* origin = str;

  int i;

  i = sizeof(st);

  printf("%d\n",i);


  while(str != (origin+i)){
    printf("%c\n",*str);
    str++;
  }

  return 0;

}
  
