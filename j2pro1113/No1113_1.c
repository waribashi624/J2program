#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int i;
  int n = 0;

  printf("パスワードの文字数を入力してください。\n");
  scanf("%d",&i);
  fflush(stdin);
  
  char* pt = (char*)malloc(i*sizeof(char)+1);
  char* tmp = pt;
 
  pt[i+1] = '\0';
  srand((unsigned)time(NULL));
  
  while(n < i){
    *pt = rand()%26 + 'a';
    printf("%c\n",*pt);
    n++;pt++;
  }
  
  exit(EXIT_SUCCESS);
}
