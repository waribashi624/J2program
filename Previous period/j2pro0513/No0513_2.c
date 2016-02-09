#include <stdio.h>

int compare(int a,int b,int c)
{

  int result;

  if(a < b && a < c){
    result = a;
  }else if(b < c){
    result = b;
  }else{
    result = c;
  }

  return result;

}

int main(void)
{

  int num1,num2,num3;
  int small;

  printf("please push three number\n");
  scanf("%d%d%d",&num1,&num2,&num3);

  small = compare(num1,num2,num3);

  printf("result = %d\n",small);

}
