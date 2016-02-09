#include <stdio.h>

int main(void)
{

  int a = 45,b = 10000;
  char num;
  unsigned char number;

  //(1)
  num = 127 + 1;
  printf("(1)127+18(c) = %d",num);

  //(2)
  num = 100 + 100;
  printf("(2)100+100(c) = %d",num);

  //(3)
  number = 127 + 1;
  printf("(3)127+1(uc) = %d",number);

  //(4)
  number = 255 + 1;
  printf("(4)255+1(uc) = %d",number);
  
  //(5)
  a = 100;
  b = 100;
  number = (unsigned char)(a + b);
  printf("(5)100+100(uc) = %d",number);
  
  //(6)
  a = 45;b = 10000;
  number = (unsigned char)(a - b);
  printf("(6)45-10000 = %d",number);

  return 0;

}
