#include <stdio.h>

int main(void)

{

  int number[9];
  int sum = 0;
  int tmp = 0;


  while(tmp < 10){
    number[tmp] = tmp*2 + 1;
    printf("%d\n",number[tmp]);
    sum = sum + number[tmp];
    tmp = tmp + 1;
  }

  printf("sum = %d\n",sum);

}
    
