#include <stdio.h>
#include <stdlib.h>

int main(void)

{

  int num[20];
  int tmp[10];
  int i = 0;  

  srandom(time(NULL));

  while(i < 20){
    num[i] = 0;
    i = i + 1;
  }

  i = 0;
  while(i < 10){
    tmp[i] = 0;
    i = i + 1;
  }

  i = 0;
  while(i < 20){
    
    num[i] = random()%100;

    num[i] = num[i] / 10;

  switch(num[i]){
  case 0:
    tmp[0] = tmp[0] + 1;
    break;
  case 1:
    tmp[1] = tmp[1] + 1;
    break;
  case 2:
    tmp[2] = tmp[2] + 1;
    break;
  case 3:
    tmp[3] = tmp[3] + 1;
    break;
  case 4:
    tmp[4] = tmp[4] + 1;
    break;
  case 5:
    tmp[5] = tmp[5] + 1;
    break;
  case 6:
    tmp[6] = tmp[6] + 1;
    break;
  case 7:
    tmp[7] = tmp[7] + 1;
    break;
  case 8:
    tmp[8] = tmp[8] + 1;
    break;
  case 9:
    tmp[9] = tmp[9] + 1;
    break;

  }
 
  i = i + 1;

  }

  i = 0;
  while(i < 10){
    printf("case%d     %d \n",i,tmp[i]);
    i = i + 1;
  }






  i = 0;
  int j = 0;
  int k = 0;

  printf("0123456789\n");
  while(i < 20){
    while(j < 10){
      if(tmp[j] != 0){
	printf("*");
	tmp[j] = tmp[j] - 1;
      }else{
	printf(" ");
      }
      j = j + 1;
    }
    printf("\n");
    j = 0;
    i = i + 1;
  }
    
      

}
