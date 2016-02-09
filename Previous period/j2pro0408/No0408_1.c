#include <stdio.h>

int main(void)
{

  int age;

  printf("Please number\n");
  scanf("%d",&age);

  if(age < 0 || age > 110){
    printf("wrong number\n");
  }else if(age < 6){
    printf("0\n");
  }else if(age < 12){
    printf("350\n");
  }else{
    printf("700\n");
  }

  return 0;

}
 
  
