#include <stdio.h>

void sum(char* pt);


int main(void)
{
  char csv1[] ="74,123,45,1,245";
  char* pt1 = csv1;
  char csv2[] ="1,2,3,4,5,6,7,8,9,10";
  char* pt2 = csv2;
  char csv3[] ="1,23,456,789,10";
  char* pt3 = csv3;

  sum(csv1);
  sum(csv2);
  sum(csv3);

  return 0;
}


void sum(char* pt)
{
  char num[5];
  int i = 0;
  int sum = 0;


  while(*pt != '\0'){
    if(*pt == ','){
      i = 0;
      sum += atoi(num);;
      pt++;
      continue;
    }

    num[i] = *pt;
    num[i+1] = '\0'; 
    i++;
    pt++;
  }

    sum += atoi(num);

  printf("csv sum = %d\n",sum);

}
