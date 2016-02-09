#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int takarakuji(int kumi,int no);

int main(void)
{

  const char compare[2] ="y";
  char ans[2];
  int num;
  int money = 3000;


 re:
  printf("Your under is %d￥\n",money);
  printf("Do you want to buy any lot ?\n");
  scanf("%d",num);

  if(num*300 > money){
    goto re;
  }

  

  srand((unsigned)time(NULL));

  int class[1000];
  int serial[1000];
  long int seed;
  int t;
  int i;

 reset:
  seed = rand()%100000 + 100000;                     //seed値の決定

  if(seed >199999){
    goto reset;
  }

  for(i = 0;i < num;i++){
    class[i] = rand()%10 + 1;                        //組の決定
  }
  int seed_sub = 0;

  printf("rest\n");

    for(i = 0;i < num;i++){                          //番号の決定
  res:
    serial[i] = seed + i;
    if(serial[i] < 199999){
      serial[i] = 0 + seed_sub;
      seed_sub = seed_sub + 1;
    }
  }


    printf("rest\n");


  for(i = 0;i < num;i++){
    money = money + takarakuji(class[i],serial[i]);
  }

  printf("money = %d",money);

  printf("Do you want to exit?(y/n)");

  scanf("%s",&ans);

  if(strcmp(ans,compare) == 1){
    goto re;
  }
  

}
  


	
