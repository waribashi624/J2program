#include <stdio.h>
#include <stdlib.h>

void setRandom(int numbers[]);


int main(void)
{

  int num[5];
  int i;

  setRandom(num);

  for(i = 0;i < 5;i++){
    printf("%d = %d\n",i,num[i]);
  }

  exit(EXIT_SUCCESS);

}


void setRandom(int numbers[])
{

  srand((unsigned)time(NULL));

  int i;

  for(i = 0;i < 5;i++){
    numbers[i] = rand()%10000;
  }

}
  

  
