#include <stdio.h>
#include <stdlib.h>

void main(void)
{

  char str[255];
  char* pt = str;
  char* tmpt;
  
  gets(str);

  while(*pt != '\0'){
    if(*pt == ' '){
      tmpt = pt;
      while(*tmpt != '\0'){
	*tmpt = *(tmpt+1);
	tmpt++;
      }
    }
    pt++;
  }

  printf("%s\n",str);

  exit(EXIT_SUCCESS);

}
