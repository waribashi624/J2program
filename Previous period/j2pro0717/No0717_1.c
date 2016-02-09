#include <stdio.h>
#include <string.h>

int main(void)
{

  char barcode[100];
  char str[100];
  
  printf("バーコードを読み込ませてください\n");
  scanf("%s",barcode);

  int len;

  len = strlen(barcode) ;

  while(len--)
    printf("%c",barcode[len]);
 
  return 0;

}

  

  
