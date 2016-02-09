#include <stdio.h>
#include <stdlib.h>

void shisoku(int a,int b,int* sum,int* def,int* product,int* divi);


int main(void)
{
  int a;
  int b;
  int sum,def,product,divi;

  int array[2];

  printf("A :");
  scanf("%d",&a);
  printf("B :");
  scanf("%d",&b);

  shisoku(a,b,&sum,&def,&product,&divi);

  printf("SUM:%d DEF:%d PRODUCT:%d DIVISION:%d",sum,def,product,divi);

  exit(EXIT_SUCCESS);

}

void shisoku(int a,int b,int* sum,int* def,int* product,int* divi)
{

  *sum = a + b;
  *def = a - b;
  *product = a * b;
  *divi = a / b;

}
