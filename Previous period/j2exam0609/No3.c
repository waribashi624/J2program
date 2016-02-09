#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define seed 10

int main(void)
{

  int num[seed];

  srand((unsigned)time(NULL));

  int i;
  for(i = 0;i < seed;i++){
    num[i] = rand()%10000;
    printf("[%d] = %d\n",i,num[i]);
  }

  int min = num[0];
  int index = 0;
  int sum = 0;

  for(i = 0;i < seed;i++){                      //最小値及びそのインデックスを求める
    if(min > num[i]){                           //add 合計の計算
      min = num[i];
      index = i;
     }
     sum += num[i];
  }

  printf("(1)min   = %d\n",min);
  printf("(2)index = %d\n",index);

  double ave = (double)sum / seed;              //平均値計算

  printf("(3)average = %f\n",ave);

    return 0;

}
