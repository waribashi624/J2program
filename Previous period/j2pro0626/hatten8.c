#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 30000

int main(void)
{
  int array[NUM];
  
  srand((unsigned)time(NULL));

  int t;
  int i;
  for(i = 0;i = NUM;i++){
    array[i] = rand()%NUM;
    for(t = 0;t < i;t++){
      if(array[i] == array[t]){
	i--;
      }
    }
    //printf("array[%d] = %d\n",i,array[i]);
  }

}
  
    
