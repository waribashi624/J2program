#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 2

int main(void)
{
  int n;
  int i;
  int tmp;
  int seed = 1;
  int disp;
  
  printf("N:");scanf("%d",&n);
  
  long long int* pt = (long long int*)malloc(n*sizeof(long long int));

  pt[0] = 0b0001;

  for(i = 1;i < n;i++){
    pt[i] = pt[i-1]<<1;
  }

  for(i = 0;i < n;i++){
    printf("%lld\n",pt[i]);
  }

  exit(EXIT_SUCCESS);

}
