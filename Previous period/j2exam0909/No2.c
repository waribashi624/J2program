#include <stdio.h>
#include <stdlib.h>

#define sentence "In order to stay healthy, you should have a balanced diet and get regular exercise."

int main(void)
{

  char str[] = sentence;

  int i;

  for(i = 0;i < sizeof(str);i++){
    if(str[i] != ' '){
      printf("%c",str[i]);
    }
  }

  printf("\n");

  exit(EXIT_SUCCESS);

}
