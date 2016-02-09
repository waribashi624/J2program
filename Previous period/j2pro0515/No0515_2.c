#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


void opening(void)
{
  printf("Dice\n");
}


int getInputNumber(void) //キーボードからの数値入力
{
  
  int num;
 re:
  printf("Please enter number 1 - 100\n");
  scanf("%d",&num);
  if(num < 1 || num > 100){
    goto re;
  }
  
  return (num);
}


int dice(int num)  //サイコロを振る
{
  int face[num];
  int i;
  
  printf("Start roll dice\n");

  for(i = 0;i < num;i++){
    face[i] = rand()%6 + 1;
    printf("%d\n",face[i]);
    sleep(1);
  }
  return (face[num - 1]);
}


void calcMoney(int num) //diceで出た値にそうさして変換及び出力
{
  int money = num * 100;
  printf("money = %d\n",money);
}

int main(void)
{
  int num;
  int face;

  // 乱数を初期化
  srand((unsigned)time(NULL));

  // ゲームオープニングメッセージ
  opening();

  // サイコロが何回転がるか，キーボードから入力
  num = getInputNumber();
  
  // サイコロをふる
  face = dice(num);

  // サイコロの目に応じて金額が計算されて，出力される．
  calcMoney(face);

  return 0;
}
