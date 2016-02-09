#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  int dice = 0;
  
  srand((unsigned)time(NULL));
  
  dice = rand()%7;
  printf("dice = %d\n",dice);

  return 0;

}
