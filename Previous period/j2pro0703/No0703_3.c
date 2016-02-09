#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM 101

void putstr(char str[]);
int count(char str[]);
void dispstr(char str[]);

void main(void)
{

  char str[NUM];
  int ct;

  putstr(str);

  dispstr(str);
  
  ct = count(str);

  printf("s = %d\n",ct);

}



void putstr(char str[])
{

  srand((unsigned)time(NULL));

  int i;
  for(i = 0;i < NUM;i++){
    str[i] = rand()%26 + 97;
  }

}



int count(char str[])
{

  int count = 0;
  int i;
  for(i = 0;i < NUM;i++){
    if(str[i] == 's'){
      count++;
    }
  }

  return count;

}



void dispstr(char str[])
{
  int i;
  for(i = 0;i < NUM;i++){
    printf("num[%d] = %c\n",i,str[i]);
  }
}
