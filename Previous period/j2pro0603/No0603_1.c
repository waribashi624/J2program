#include <stdio.h>

double yard2meter(double d);

void main(void)
{

  double yard;
  printf("Please put yard.\n");
  scanf("%lf",&yard);

  double meter = yard2meter(yard);

  printf("meter = %f\n",meter);

}

double yard2meter(double d)
{

  return (d * 0.9144);

}
