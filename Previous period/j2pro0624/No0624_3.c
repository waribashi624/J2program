#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//数字は48~ 英大文字は95~

int main(void)
{

  char str;

  srand((unsigned)time(NULL));

  int i;
  for(i = 0;i < 8;i++){
    while(1){
    str =rand()%123;
    if(str >= 48 && str <=57){
      break;
    }else if(str >= 97 && str <= 0x7A){
    break;
    }else if(str >= 65 && str <= 90){
      break;
    }
    }

    printf("%c",str);
  }

  printf("\n");

}

 
      

