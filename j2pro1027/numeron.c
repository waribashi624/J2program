#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int ply1;
  int ply2;
  int ply1_ar[3];
  int ply2_ar[3];
  int i;

  printf("To player1: Please puts number.");
  scanf("%d",&ply1);
  printf("\f");
  
  printf("\033[2J");
  printf("To player2: Please puts number.");
  scanf("%d",&ply2);

  ply1_ar[0] = ply1/100;
  ply1_ar[1] = (ply1/10)%10;
  ply1_ar[2] = ply1%10;

  ply2_ar[0] = ply1/100;
  ply2_ar[1] = (ply1/10)%10;
  ply2_ar[2] = ply1%10;

  (i = 0;i < 3;i++){
    if(ply1_ar[i] == ply1_ar[i + 1])
  

  

  exit(EXIT_SUCCESS);

}
