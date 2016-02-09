#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{

  int count = 0;
  char *chk;
  char str[5];
  char tmp[5] = "oeda";

  srand((unsigned)time(NULL));

  int i;
  for(i = 0;i != 1000000;i++){
    str[0] = str[1];
    str[1] = str[2];
    str[2] = str[3];
    str[3] = str[4];

    str[4] = rand() % 36;

    if(str[4] < 10){
      str[4] += 0x30;
    }else{
      str[4] += 87;
    }

    printf("%c",str[4]);
    
    if(str[0] == 'o' && str[1] == 'e' && str[2] == 'd' && str[3] == 'a'){
      count += 1;
    }
  }

  printf("\n");
  printf("oeda = %d\n",count);

}
