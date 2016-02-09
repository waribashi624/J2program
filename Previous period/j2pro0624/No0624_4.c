#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  char chk;
  int check;
  FILE *fp;

  char string[256];
  char str[8];

  srand((unsigned)time(NULL));

   int i;
  for(i = 0;i < 8;i++){
    while(1){
    str[i] =rand()%123;
    if(str[i] >= 48 && str[i] <=57){
      break;
    }else if(str[i] >= 97 && str[i] <= 0x7A){
    break;
    }else if(str[i] >= 65 && str[i] <= 90){
      break;
    }
    }
  }

  for(i = 0;i < 8;i++){
    printf("%c\n",str[i]);
  }

  if((fp = fopen("pass.txt","w+")) == NULL){
    printf("FILE not found.Create new FILE.\n");
  }else{
    printf("FILE found.Oparete this FILE.\n");
  }

  
  check = fputs(str,fp);
  if(check == EOF){
    printf("ERROR\n");
  }
  

  fgets(string,256,fp);
  
  
  printf("%s\n",string);
  
  fclose(fp);

  return 0;

}
