#include <stdio.h>

int main(void)
{

  int days = 0;

  printf("Please put namber:");
  scanf("%d",&days);

  days = days % 7;

  switch(days){
  case 0:
    printf("Wednesday\n");
    break;
  case 1:
    printf("Thursday\n");
    break;
  case 2:
    printf("Friday\n");
    break;
  case 3:
    printf("Saturday\n");
    break;
  case 4:
    printf("Sunday\n");
    break;
  case 5:
    printf("Monday\n");
    break;
  case 6:
    printf("Tuesday\n");
    break;
  }

  return 0;

}
 
