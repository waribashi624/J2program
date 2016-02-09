#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  unsigned long nam[10000];
  srandom(time(NULL));
  int tmp = 0;
  int i;
  int j;
  int t;
  int count = 0;

  for(t = 0;t < 10000;t++){
    nam[t] = 0;
  }



  for(i = 0;i < 10000;i++){
  re:
    nam[i] = random() % 1000000;
    printf("がんばれがんばれ");
      while(tmp < i ){
	if(nam[i] == nam[tmp]){
	  count = count + 1;
	  if(count >= 2){
	    goto re;
	  }
	}
	tmp =tmp + 1;
      }
      tmp = 0;
      count = 0;
  }


  for(j = 0;j < 10000 ;j++){
    printf("090%u\n",nam[j]);
  }

  return 0;

}

   
	
