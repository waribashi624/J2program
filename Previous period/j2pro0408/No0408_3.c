#include <stdio.h>

int main(void)
{

  int tmp;
  int tmp2 = 1;
  int tmp3 = 1;

  printf("Please number\n");
  scanf("%d",&tmp);

  while(tmp2 <= tmp){
    while(tmp3 <= tmp2){
      printf("*");
      tmp3 = tmp3 + 1;
    }
    printf("\n");
    tmp2 = tmp2 + 1;
    tmp3 = 1;
  }

}
    

  
