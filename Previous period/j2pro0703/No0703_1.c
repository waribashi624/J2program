#include <stdio.h>

#define NUM 10

void setNumber(int num[]);
void dispNumber(int num[]);
void doubleNumber(int num[]);

int main(void)
{

  int num[NUM];
  
  setNumber(num);

  dispNumber(num);

  doubleNumber(num);

  dispNumber(num);

  return 0;

}


void setNumber(int num[])
{

  int i;
  for(i = 0;i < NUM;i++){
    num[i] = i;
  }

}


void dispNumber(int num[])
{
  int i;
  for(i = 0;i < NUM;i++){
    printf("num[%d] = %d\n",i,num[i]);
  }
}

double doubleNumber(int num[])
{
  int i;
  for(i = 0;i < NUM;i++){
    num[i] = num[i] * 2;
  }
}



