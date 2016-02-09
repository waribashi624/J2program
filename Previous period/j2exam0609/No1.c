#include <stdio.h>

double pound2kg(double m);

double main(void)
{

  double pound;
  double kg;

  printf("Please put number.\n");
  scanf("%lf",&pound);

  kg = pound2kg(pound);

  printf("%fpound = %fkg\n",pound,kg);

  return 0;

}

double pound2kg(double m)
{

  double kg;
  kg = m * 0.45359237;

  return kg;

}
