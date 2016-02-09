#include <stdio.h>

#define damege 5

typedef struct Status{
  char name[255];
  int HP;
  int attack;
  int avoid;
  int luck;
  int point;
}Status;

void battle();

Status player;
Status* pt = &player;

int main(void)
{

  player.HP = 20;
  battle();
  printf("%d\n",player.HP);

  return 0;

}

void battle()
{
  (pt->HP) -= damege;
}
  
