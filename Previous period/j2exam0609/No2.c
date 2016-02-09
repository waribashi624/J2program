#include <stdio.h>
#define appmoney 150
#define oranmoney 762

int calc_money(int apple,int orange);

int main(void)
{

  int orange,apple;

  printf("Please put number of apple.\n");
  scanf("%d",&apple);
  printf("Please put number of orange.\n");
  scanf("%d",&orange);

  int money = calc_money(apple,orange);

  printf("sum money = %d\n",money);

  return 0;

}

int calc_money(int apple,int orange)
{

  int sum;
  sum = apple * appmoney + orange * oranmoney;

  return sum;

}
