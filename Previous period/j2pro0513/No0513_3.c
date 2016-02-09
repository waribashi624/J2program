#include <stdio.h>

int ruijo(int seed,int rate)
{
  
  int loop;/*loop*/
  int num;

  num = seed;

  for(loop = 1;loop < rate;loop++){
    seed = seed *num;
  }

  return seed;
}
int main(void)
{

  int num1,num2;
  int result;
  
  printf("please push two number\n");
  scanf("%d%d",&num1,&num2);

  result = ruijo(num1,num2);

  printf("result = %d \n",result);

  return 0;


}
