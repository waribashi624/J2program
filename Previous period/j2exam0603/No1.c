#include <stdio.h>

int day2time(int day);

int main(void)
{

  int day;

  printf("Please put days.\n");
  scanf("%d",&day);

  int time;

  time = day2time(day);
  
  printf("Past time = %d\n",time);

  return 0;

}

int day2time(int day)
{

  int time;

  time = day * 24;

  return time;

}
