#include <stdio.h>

int main(void)
{

  char str;
  char dummy;

  while(1){
    if(str >= 65 && str <= 90){
      printf("str = %c\n",str);
      break ;
    }else{
      printf("Please put string.\n");
      scanf("%c",&str);
      scanf("%c",&dummy);
    }
  }
}
