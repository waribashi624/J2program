#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

void init(int array[]);
void swap(int *a,int *b);
void bubble_sort(int array[]);
void disp(int array[]);

int main(void)
{
  srand((unsigned)time(NULL));
  int array[NUM];
  init(array);
  disp(array);
  bubble_sort(array);
  disp(array);
  exit(EXIT_SUCCESS);
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

void disp(int array[])
{
  int i;
  for(i = 0;i < NUM;i++){
    printf("%d,",array[i]);
  }
  printf("\n");
}

void bubble_sort(int array[])
{
  int t;
  int i;
  for(t = NUM-1;t > 0;t--){
    for(i = NUM - 1;i > 0;i--){
      if(array[i]<array[i - 1]){
	swap(&array[i],&array[i-1]);
      } 
    }
  }
}
