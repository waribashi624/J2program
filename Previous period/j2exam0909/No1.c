#include <stdio.h>
#include <stdlib.h>

double BMI(double weight,double tall);

int main(void)
{
  
  double weight;
  double tall;
  double bmi;
  
  printf("身長を入力してください:");
  scanf("%lf",&tall);

  printf("体重を入力してください:");
  scanf("%lf",&weight);

  bmi = BMI(weight,tall);

  printf("BMI = %f\n",bmi);

  exit(EXIT_SUCCESS);

}

double BMI(double weight,double tall)
{

  double bmi = 0;

  bmi = weight / (tall*tall);

  return bmi;

}
  

  
