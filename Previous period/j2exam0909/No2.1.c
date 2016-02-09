#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char str[255];
  char* pt = str;
  
  gets(str);

  while(*pt != '\0'){
    if((*pt) != ' '){
      printf("%c",(*pt));
    }
    pt++;
  }

  printf("\n");

  exit(EXIT_SUCCESS);

}
