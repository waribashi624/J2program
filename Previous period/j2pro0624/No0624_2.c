#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//25文字

int main(void)
{

  char str;

  srand((unsigned)time(NULL));

  str = rand()%26 + 97;        //ASCII の英文字が97~のため
 
  printf("%c\n",str);

  return 0;
}
  

  
