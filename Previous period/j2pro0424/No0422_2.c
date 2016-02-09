#include <stdio.h>

int main(void)
{

  int nam = 123;
  int tmp = 0;

  while(nam <= 456){
    tmp = tmp + nam;
    nam = nam + 1;
  }

  printf("%d\n",tmp);

  return 0;

}
