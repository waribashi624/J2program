#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 1000000

int main(void)
{

  
  int point[NUM];
  int sum = 0;
  double average;

  srand((unsigned)time(NULL));

  int i;
  for(i = 0;i < NUM;i++){
    point[i] = rand() % 101;
    sum += point[i];
    //printf("sum = %d\n",sum);
  }

  printf("sum = %d\n",sum);

  average =(double)sum / NUM;

  printf("average = %f\n",average);

  return 0;

}
