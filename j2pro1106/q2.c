#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BACK -1

void back_num(int cp[]);

int main(void)
{
  int origin[101]; int cp[101];
  int i;
  for(i = 1;i < 101;i++){
    origin[i-1] = BACK;
    cp[i-1] = BACK;
  }
  
  origin[100] = 0;
  cp[100] = 0;
  
  back_num(cp);
}


void back_num(int cp[])
{
  int n = 0;
  int i = 2;
  while(i < 100){

    for(n = i;n < 100;n++){
      if(n%(i-1) == 0){
	if(cp[n]==BACK){
	  cp[n] = n;
	}else{
	  cp[n] == BACK;
	}
      }
    }

    for(n = 1;n<100;n++){
      if(cp[n]==BACK){
	printf("* ");
      }else{
	printf("%d ",cp[n]);
      }
    }

    printf("\n");
    i++;
  }
}
	  
