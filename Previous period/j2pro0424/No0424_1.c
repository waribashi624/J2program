#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  int num;
  int i;

  srand((unsigned)time(NULL));

  for(i = 0;i < 5;i++){
    num = rand();
    printf("num = %d\n",num);
  }

  return 0;

}
