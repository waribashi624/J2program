#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 40

void setnum(int num[]);
double average(int num[]);
void dispnum(int num[]);

void main(void)
{

  int num[NUM];
  double ave;

  setnum(num);

  dispnum(num);
  
  ave =  average(num);

  printf("average = %lf\n",ave);

}



void setnum(int num[])
{
  srand((unsigned)time(NULL));
  int i;
  for(i = 0;i < NUM;i++){
    num[i] = rand()%101;
  }
}



void dispnum(int num[])
{
  int i;
  for(i = 0;i < NUM;i++){
    printf("num[%d] = %d\n",i,num[i]);
  }
}



double average(int num[])
{
  double ave = 0;
  int sum = 0;

  int i;
  for(i = 0;i < NUM;i++){
    sum += num[i];
  }

  ave = (double)sum / NUM;
  
  return ave;

}
