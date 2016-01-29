#include <stdio.h>
#include <stdlib.h>
#include "bp.h"

void calc_battlepoint(PA player[], int number);
void disp_character(PA player[]);

int main(void)
{
  int number;
  PA player[PLAYER];

  printf("number=");
  scanf("%d", &number);

  calc_battlepoint(player, number);
  disp_character(player);

  return 0;
}

void disp_character(struct PA player[])
{
  int i;

  printf("No  Name     HP   MP   AT    DE    SP    IN\n");
  for (i=0; i<PLAYER; i++) {
    printf("%4d ", i);
    printf("%s", player[i].name);
    printf(" ");
    printf("%4d %4d %5.2f %5.2f %5.2f %5.2f\n", 
	   player[i].hp, player[i].mp, player[i].attack, player[i].defence, player[i].speed, player[i].intelligence);
  }
}
