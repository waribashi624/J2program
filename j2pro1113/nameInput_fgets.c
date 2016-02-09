#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int len;
  char *name;
  char dummy;
  
  printf("The number of 名前の文字列を入力してください:");
  scanf("%d", &len);
  scanf("%c", &dummy);
  
  name = (char *)malloc(len*sizeof(char)+1);

  printf("名前をローマ字で入力してください:");
  fgets(name, len+1, stdin);

  printf("あなたの名前は%sです\n", name);

  return 0;
}
