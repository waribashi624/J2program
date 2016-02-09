#include <stdio.h>
#include <stdlib.h>

#define RATE 120.59

double change(double yen);

int main(void)
{
  double yen;
  double daller;

  printf("Please puts number:");
  scanf("%lf",&yen);

  daller = change(yen);

  printf("%fyen = %fdaller\n",yen,daller);

  exit(EXIT_SUCCESS);

}

double change(double yen)
{

  double daller;

  daller = yen / RATE;

  return daller;

}
  
