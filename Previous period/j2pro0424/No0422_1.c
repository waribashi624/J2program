#include <stdio.h>

int main(void)
{

  int point = 0;

  printf("Please put your point :");
  scanf("%d",&point);

  point = point / 10;

  if(point >= 8){
    printf("Your rank is A.\n");
  }else if(point >= 7){
    printf("Your rank is B.\n");
  }else if(point >=6){
    printf("Your rank is C.\n");
  }else if(point <= 5){
    printf("Your rank is D.\n");
  }

  return 0;

}
