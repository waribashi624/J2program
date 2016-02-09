#include <stdio.h>
#include <stdlib.h>

int main (void)
{

  char str[255];
  char *pt = str;
  char *origin = str;
  int count = 0;
  pt--;
  
  gets(str);
  
  while(pt++){
    if(*pt == ' '){
      count++;
	}else if(*pt == '\0'){
      break;
    }
  }

  if(pt != origin){
    count++;
  }
  
  printf("Words = %d\n",count);

  exit(EXIT_SUCCESS);

}
