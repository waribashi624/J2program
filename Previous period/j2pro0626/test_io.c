#include <stdio.h>
#include <string.h>

int main(void)
{

  //6

  int chk;
  FILE *fp;
  char str[255];

  if((fopen("test.txt","w+")) == NULL){
    printf("FILE not found.Create new FILE.\n");
  }else{
    printf("FILE found.Oparate this FILE.\n");
  }

  scanf("%s",&str);

  chk = fputs(str,fp);

  if(chk == EOF){
    printf("ERROR\n");
  }

  fclose(fp);

  return 0;

}
