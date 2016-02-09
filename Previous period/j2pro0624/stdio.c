#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

  int a;
  FILE *fp;
  char sentence[255];

  if((fp = fopen("sample.txt","w+")) == NULL){
      printf("FILE is not found.Creat new FILE.\n");
  }else{
    printf("FILE found.Oparete this FILE.\n");
  }

  printf("Please put sentence\n");
  scanf("%s",sentence);

  fgets("")

    fclose(fp);
    return 0;
}

    
