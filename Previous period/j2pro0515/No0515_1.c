#include <stdio.h>

int main(void)
{

  int hour,minute,second;
 re:
  printf("Please enter time :hour_minute_second\n");
  scanf("%d%d%d",&hour,&minute,&second);

  if(hour >= 24 || minute >= 60 || second >= 60){
    goto re;
  }

  int time;

  time = calc_second(hour,minute,second);

  printf("left time = %d\n",time);

}

int calc_second(int hour,int minute,int second)
{
  int time;
  time = hour * 3600 + minute * 60 +second;

  return(time);
}
