#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  char str[6];

  srand((unsigned)time(NULL));

  int t;
  int i;
  for(i = 0;i < 5;i++){
    str[i] = rand()%26 + 97;
    for(t = 0;t < i;t++){
      if(str[i] == str[t]){
	i--;
      }    
    }
  printf("%d = %c\n",i,str[i]);
  }

  
}


