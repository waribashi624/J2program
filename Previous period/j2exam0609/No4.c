#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  int num[20];

  srand((unsigned)time(NULL));
  
  int i;
  for(i = 0;i < 20;i++){
    num[i] = rand()%100;
    printf("[%d] = %d\n",i,num[i]);
  }
  
  int cut_num;
  printf("How many do you want cut?\n");
  scanf("%d",&cut_num);

  int cut_index[cut_num];
  printf("Please put number.\n");
  for(i = 0;i < cut_num;i++){
    printf("cut[%d]=",i);
    scanf("%d",&cut_index[i]);
  }

  printf("\n\n");

  int flag = 0;
  int t;
  for(i = 0;i < 20;i++){
    for(t = 0; t < cut_num;t++){
      if(i == cut_index[t]){
	flag++;
      }
    }
    if(flag == 0){
      printf("box[%d]=%d\n",i,num[i]);
    }
    flag = 0;
  }



  return 0;

}
  
