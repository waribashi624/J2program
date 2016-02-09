#include <stdio.h>
#include <stdlib.h>

#define NUM 20

void set_number(int array[]);
void disp_number(int array[]);
int get_min(int array[]);
int get_min2(int array[]);

int main(void)
{
  int array[NUM];
  int min;
  int min2;

  set_number(array);

  disp_number(array);

  min = get_min(array);
  printf("最小値:%d\n", min);

  min2 = get_min2(array);
  printf("最小値から二番目:%d\n", min2);

  return 0;
}

void set_number(int array[])
{
  int i;

  srand(1125);

  for (i=0; i<NUM; i++) {
    array[i] = rand()%200 - 100;
  }

}

void disp_number(int array[])
{
  int i;

  for (i=0; i<NUM; i++) {
    printf("array[%2d] = %3d\n", i, array[i]);
  }

}

int get_min(int array[])
{
  int i;
  int min = 500;

  for (i = 0; i < NUM; i++)
  {
  if (min > array[i])
  {
    min = array[i];
  }
  }

  return min;
}

int get_min2(int array[])
{
  int i;
  int min = 500;
  int min2;

  for (i = 0; i < NUM; i++)
  {
  if (min > array[i])
  {
    min = array[i];
  }
  }

  if (array[min] != array[0])
  {
    i = 0;
  }
   else
  {
    i = 1;
  }
  for (; i < NUM; i++)
  {
  if (min != array[i])
  {
    if (min2 > array[i])
    {
      min2 = array[i];
    }
  }
  }

  return min2;
}
