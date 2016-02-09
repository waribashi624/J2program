#include <stdio.h>

int calc_sum(int begin,int end);

int main(void)
{

  int begin,end;

 re:
  printf("Please put number of begin and end.");
  scanf("%d",&begin,&end);

  if(begin >= end){
    goto re;
  }

  int sum;

  sum = calc_sum(begin,end);
  
  printf("sum = %d",sum);

  return 0;

}

int calc_sum(int begin,int end)
{

  int sum = 0;
  
  for(;begin >= end;begin++){
    sum += begin;
  }

  return sum;

}
