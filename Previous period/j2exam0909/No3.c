#include <stdio.h>
#include <stdlib.h>

#define sentence "In order to stay healthy, you should have a balanced diet and get regular exercise."

int main(void)
{

  char str[] = sentence;

  printf("%s\n",str);

  int i;
  int t;
  int tmp;
  
  for(i = 0;i < sizeof(str);i++){
    if(str[i] == ' '){
      for(t = i;t < sizeof(str);t++){
	str[t] = str[t+1];
      }
    }
  }

  printf("%s\n",str);

  exit(EXIT_SUCCESS);

}
