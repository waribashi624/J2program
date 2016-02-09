#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10

void init(char str[]);
void disp(char str[]);
void swap(char *a,char *b);
void bubble_sort(char array[]);

int main(void)
{
  char str[NUM];
  srand((unsigned)time(NULL));
  init(str);
  disp(str);
  bubble_sort(str);
  disp(str);
  exit(EXIT_SUCCESS);
}

void init(char str[])
{
  int i;
  for(i = 0;i < NUM;i++){
    str[i] = rand()%('z'-'a') + 'a';
  }
}

void disp(char str[])
{
  int i;
  for(i = 0;i < NUM;i++){
    printf("%c",str[i]);
  }
  printf("\n");
}

void bubble_sort(char array[])
{
  int t;
  int i;
  for(t = NUM-1;t > 0;t--){
    for(i = NUM-1;i > 0;i--){
      if(array[i]<array[i - 1]){
	swap(&array[i],&array[i-1]);
      } 
    }
  }
}

void swap(char *a,char *b)
{
  char tmp = *a;
  *a = *b;
  *b = tmp;
}
