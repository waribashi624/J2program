#include <stdio.h>


int main(void)
{
  
  int seed;
  printf("Please put num:");
  scanf("%d",&seed);
  
  int num[seed];

  int i = 0;
  for(i = seed - 1;i != 0;i--){
    num[i] = i;
  }

  int seed2 = 0;
  int l;
  
  while(1){
    num[i] = seed;
    
