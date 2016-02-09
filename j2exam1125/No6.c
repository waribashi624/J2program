#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  srand((unsigned)time(NULL));

  int ST[6];
  int i;
  int sum = 0;
  int over;
  int t;

  for(i = 0;i < 6;i++){
    ST[i] = rand()%101;
    sum += ST[i];
  }

  if(sum != 100){
    over = sum -100;
    if(over < 0){
     
      for(i = 0;i > over;i--){
	ST[rand()%6] += 1;
      }
    }
    
    for(i = 0;i < over;i++){
      t = rand()%6;
      if(ST[t] > 0){
	ST[t]--;
      }else{
	i--;
      }
    }
  }

  sum = 0;
  for(i = 0;i < 6;i++){
    sum += ST[i];
  }
  
  printf("HP:%3d\nMP:%3d\n攻撃:%3d\n防御力:%3d\n素早さ:%3d\n知力:%3d\n",ST[0],ST[1],ST[2],ST[3],ST[4],ST[5]);
  
  printf("SUM = %d\n",sum);
 
 
  return 0;
}
