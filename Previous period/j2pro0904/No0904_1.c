#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char str[255];
  char* end_pt = str;
  char* pt = str;
  
  gets(str);

  while(*end_pt++ != '\0');

  while(--end_pt >= pt){
    printf("%c",*end_pt);
  }

  printf("\n");

  exit(EXIT_SUCCESS);

}
  

  
