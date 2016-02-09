#include <stdio.h>
#define BACK -1
#define NUM 10

int main(void)
{
  int ori[NUM];
  int cp[NUM];
  int i;
  
  for(i = 0;i < NUM;i++){
    ori[i]=BACK; cp[i]=BACK;
  }

  back_num(cp);
}

void back_num(int cp[])
{
  int i;int n;

  for(i = 2;i < NUM;i++){
    for(n = i;n < NUM;n++){
      if(n/(i-1) == 0){
	if(cp[n] == BACK){
	  cp[n] = n;
	}else{
	  cp[n] = BACK;
	}
      }
    }

    for(n = 1;n < NUM;n++){
      if(cp[n] == BACK){
	printf("* ");
      }else{
	printf("%d ",cp[n]);
      }
    }
  }
}

 
