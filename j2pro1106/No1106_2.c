#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy1(char target[],char source[]);
void my_strcpy2(char target[],char source[]);
void my_strcpy3(char target[],char source[]);


int main(void)
{
  char str1[] = "programming";
  char str2[100];

  my_strcpy1(str2,str1);
  printf("%s\n",str2);

  my_strcpy2(str2,str1);
  printf("%s\n",str2);

  my_strcpy3(str2,str1);
  printf("%s\n",str2);

  return 0;
}

void my_strcpy1(char target[],char source[])
{
  char* tar = target; char* sou = source;
  while(*tar++ = *sou++);
}

void my_strcpy2(char target[],char source[])
{
  int i = 0;
  while(source[i]){
    target[i] = source[i];
    i++;
  }
}

void my_strcpy3(char target[],char source[])
{
  char* tar = target; char* sou = source;
  while(*source){
    *target = *source;
    target++; source++;
  }

}
