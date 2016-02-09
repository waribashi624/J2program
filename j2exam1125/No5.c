#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void set_number(int array[]);
void disp_number(int array[]);
int first_min(int array[]);
int second_min(int array[],int *second_min);

int main(void)
{
  int array[NUM];
  int min;
  int* sec_min;
  int index;
  

  set_number(array);

  disp_number(array);

  min = first_min(array);

  printf("first min = %d\n",min);

  index = second_min(array,sec_min);

  printf("Second min[%d] = %d\n",index,*sec_min);

  return 0;
}

void set_number(int array[])
{
  int i;

  srand(1125);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%201-100;
  }

}

void disp_number(int array[])
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("array[%2d] = %3d\n", i, array[i]);
  }

}

int first_min(int array[]){
  int min = array[0];
  int i;
  
  for(i = 0;i < NUM;i++){
    if(min > array[i]){
      min = array[i];
    }
  }
  return min;  
}

int second_min(int array[],int *second_min){
  *second_min = 100;
  int first_min = array[0];
  int first_index = 0;
  int second_index = 0;
  int i;

  for(i = 0;i < NUM;i++){
    if(first_min > array[i]){
      first_min = array[i];
    }
  }

  for(i = 0;i < NUM;i++){
    if(*second_min > array[i]){
      if(array[i] > first_min){
	*second_min = array[i];
	second_index = i;
      }
    }
  }

  return second_index;
}
