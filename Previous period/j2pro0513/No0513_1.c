#include <stdio.h>

int calc_sum(int m,int n)
{

  return m + n;

}

int main(void)
{

  int m = 0;
  int n = 0;
  int sum = 0; 

  printf("Please push two number :\n");

  scanf("%d%d",&m,&n);

  sum = calc_sum(m,n);

  printf("%d+%d = %d\n",m,n,sum);

  return 0;

}

  
