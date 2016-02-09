#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{

  char tmp[5];
  char dum[5];

  scanf("%s",tmp);
  //scanf("%s",dum);

  fflush(stdin);

  sleep(1);
  fflush(stdin);

  fgets(tmp,4,stdin);

  fflush(stdin);

  printf("%s\n",tmp);

  return 0;
}
