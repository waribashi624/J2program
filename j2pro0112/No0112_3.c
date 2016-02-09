#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define NUM 10

void initialize(int array[]);
void disp_array(int array[]);
void s_sort(int array[]);
void b_sort(int array[]);
void swap(int *a, int *b);

int s_co_count = 0,s_ch_count = 0,b_co_count = 0,b_ch_count;

int main(void)
{
  int array[NUM];
  clock_t start, end;
  double st,bt; //s_sort time,b_sort time
  
  initialize(array);
  disp_array(array);

  start = clock();

  s_sort(array);

  end = clock();
  disp_array(array);
  
  st = (double)(end-start)/CLOCKS_PER_SEC;

  start = clock();
  initialize(array);
  b_sort(array);
  end = clock();
  disp_array(array);
  bt = (double)(end-start)/CLOCKS_PER_SEC;
  

  printf("simple compare:%d\nchange:%d\n",s_co_count,s_ch_count);
  printf("TIME:%lf\n",st);
  printf("bubble compare:%d\nchange:%d\n",b_co_count,b_ch_count);
  printf("TIME:%lf\n",bt);

  return 0;
}

void initialize(int array[])
{
  int i;
  
  srand(0);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%100;
  }
}

void disp_array(int array[])
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("%d\n", array[i]);
  }
  printf("\n");

}

void s_sort(int array[])
{
  int i, j;
  int index;

  for (i=0; i<NUM-1; i++) {
    index = i;
    for (j=i; j<NUM; j++) {
      s_co_count++;
      if(array[j]>array[index]) {
	index = j;
      }
    }
    s_ch_count++;
    swap(&array[i], &array[index]);
  }
}

void b_sort(int array[])
{
  int i,t;
  for(i = 0;i < NUM-1;i++){
    for(t = NUM-1;t > i;t--){
      b_co_count++;
      if(array[t]>array[t-1]){
	b_ch_count++;
	swap(&array[t],&array[t-1]);
      }
    }
  }
}


void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
