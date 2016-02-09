#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1000
#define NUM 500

void init(int array[]);
double average(int array[]);
void simple_sort(int array[]);
void swap(int *a,int *b);
double median(int array[]);
int mode(int array[]);
void dispTop10(int array[]);

void init(int array[])
{
  int i;
  
  for (i=0; i<NUM; i++) {
    array[i] = rand()%MAX;
  }
}

void dispTop10(int array[])
{
  int i;
  printf("(2)\n");
  
  for (i=0; i<10; i++) {
    printf("%d\n", array[i]);
  }
  printf("\n");
}

int main(void)
{
  int array[NUM],mod;
  double ave,med;

  srand(205);// 205から解答結果を確認ため，乱数の種は変更してはいけない

  init(array);
  ave = average(array);
  printf("(1)\naverage = %f\n\n",ave);
  simple_sort(array);
  dispTop10(array);
  med = median(array);
  printf("(3)\nmedian = %f\n\n",med);
  mod = mode(array);
  printf("(4)\nmode = %d\n\n",mod);
  return 0;
}

double average(int array[])
{
  int i;
  double ave = 0.0;

  for(i = 0;i < NUM;i++){
    ave += array[i];
  }
  
  ave /= (double)NUM;

  return ave;
}


void simple_sort(int array[])
{
  int i,t,index;
  for(i = 0;i < NUM-1;i++){
    index = i;
    for(t = i;t < NUM;t++){
      if(array[index]<array[t]){
	index = t;
      }
    }
    swap(&array[index],&array[i]);
  }
}


void swap(int *a,int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}


double median(int array[])
{
  int odd_sum;
  double med;
  if(NUM%2 == 0){
    odd_sum = array[NUM/2]+array[NUM/2-1];
    med =(double)odd_sum/2.0;
  }else{
    med = array[NUM/2];
  }

  return med;
}

int mode(int array[])
{

  int i, count[MAX];
  int temp;
  for(i = 0;i < MAX;i++){
    count[i] = 0;
  }

  for(i = 0;i < NUM;i++){
    temp = array[i];
    count[temp]++;
  }
  
  int index = 0;
  for(i = 1;i < MAX;i++){
    if(count[index]<count[i]){
      index = i;
    }
  }
  return index;
}
