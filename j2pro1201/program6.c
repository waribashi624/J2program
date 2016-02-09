#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int p[6] = {0}; //属性値 [1]HP,[2]MP,[3]攻撃,[4]防御,[5]素早さ,[6]知力
  int num;
  int i;

  srand((unsigned)time(NULL));

  for (i = 0; i < 100; i++) {
    num = rand()%6;
    p[num]++;
  }

  for(i = 0; i < 6; i++) {
    printf("p[%d]:%d\n", i, p[i]);
  }

  return 0;
}
