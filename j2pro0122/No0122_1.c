#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER 10
#define NAME 8+1

void initialize(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[]);
void disp_array(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[]);
void search_player(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[]);

int main(void)
{
  int no[PLAYER];
  char name[PLAYER][NAME];
  int hp[PLAYER];
  int mp[PLAYER];
  double attack[PLAYER];
  double defence[PLAYER];
  int player_no;

  srand(1);

  initialize(no, name, hp, mp, attack, defence);

  disp_array(no, name, hp, mp, attack, defence);

  search_player(no, name, hp, mp, attack, defence);

  return 0;
}

void initialize(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[])
{
  int i, j;

  for (i=0; i<PLAYER; i++) {
    no[i] = i;
    for (j=0; j<NAME-1; j++) { 
      name[i][j] = 'a'+rand()%26;
    }
    name[i][j] = '\0';
    hp[i] = rand()%101;
    mp[i] = rand()%101;
    attack[i] = (double)rand()/RAND_MAX;
    defence[i] = (double)rand()/RAND_MAX;
  }

}

void disp_array(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[])
{
  int i;

  printf(" No  Name     HP MP AT   DE \n");
  for (i=0; i<PLAYER; i++) {
    printf("[%2d] ", no[i]+1);
    printf("%s", name[i]);
    printf(" ");
    printf("%2d %2d %.2f %.2f\n", hp[i], mp[i], attack[i], defence[i]);
  }

}

void search_player(int no[], char name[][NAME], int hp[], int mp[], double attack[], double defence[])
{
  
  int i;
  int index = 0;

  for(i = 0;i < PLAYER;i++){
    if(attack[i] > attack[index]){
      index = i;
    }
  }

  printf("MAX_ATTCK PLAYER IS...\n\n");
  printf(" No  Name     HP MP AT   DE \n");
  printf("[%2d] ", no[index]+1);
  printf("%s", name[index]);
  printf(" ");
  printf("%2d %2d %.2f %.2f\n", hp[index], mp[index], attack[index], defence[index]);
}

  
