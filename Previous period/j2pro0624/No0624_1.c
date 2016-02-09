#include <stdio.h>
#define NUM 5

int main(void)
{

  char str[NUM];
  char dummy;

  int i;
  for(i = 0;i < NUM;i++){
    printf("str[%d]:",i);
    scanf("%c",&str[i]);
    scanf("%c",&dummy);
  }
  
  for(i = 4;i >= 0;i--){
    printf("%c",str[i]);
  }
  
  printf("\n");

  return 0;

}
