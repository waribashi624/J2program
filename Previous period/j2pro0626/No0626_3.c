#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  char str[6];

  srand((unsigned)time(NULL));

  int chk = 0;
  int t;
  int i;
  for(i = 0;i < 5;i++){
  re:
    str[i] = rand()%26 + 97;
    for(t = 0;t < 5;t++){
      if(str[i] == str[t]){
	chk += 1;
      }    
    }
    if(chk != 1){
      chk = 0;
      goto re;
    }
    printf("%d = %c\n",i,str[i]);
    chk = 0;
  
  }
}

