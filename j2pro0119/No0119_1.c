#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

void init(int array[]);
void swap(int *a,int *b);
void simple_sort(int array[]);
void disp(int array[]);

int main(void){
  srand((unsigned)time(NULL));
  int array[NUM];
  init(array);
  disp(array);
  simple_sort(array);
  disp(array);
  
}

void init(int array[])
{
  int i;
  for(i = 0;i < NUM;i++){
    array[i] = rand()%100;
  } 
}

void swap(int *a,int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void simple_sort(int array[])
{
  int i;
  int t;
  int max;
  for(t = NUM - 1;t >= 0;t--){
    max = t;
    for(i = t;i >= 0 ;i--)
      if(array[max] < array[i]){
	max = i;
      }
    swap(&array[max],&array[t]);
  }
}

void disp(int array[])
{
  int i;
  for(i = 0;i < NUM;i++){
    printf("%d,",array[i]);
  }
  printf("\n");
}
