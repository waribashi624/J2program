#include <stdio.h>
#include <unistd.h>

int main(void)
{

  int num = 0;

  int i;
  
  for(i = 1;i <= 40;i++){
    if(i % 3 == 0 || i / 10 == 3 || i % 10 == 3){
      printf("いまでしょ！\n");
    }else{
      printf("いつやるか？\n");
    }

    sleep(1);
  }

  return 0;

}
