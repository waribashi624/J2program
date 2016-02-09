#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(char **a,char **b);

int main(void){
  char str1[255];  scanf("%s",str1);
  char str2[255];  scanf("%s",str2);

  swap(&str1,&str2);

  printf("Str1:%s\n",str1);
  printf("Str2:%s\n",str2);

  return 0;

}

void swap(char **a,char **b)
{
  char *tmp = *a;
  *a = *b;
  *b = tmp;
}

