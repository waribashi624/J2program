#include <stdio.h>
#include <stdlib.h>

#define PLAYER 10 
#define NAME 8+1

enum TYPE{NAME = 1,HP,MP,AT,DEF,SPE,INT}

typedef struct parameter {
  char name[NAME];
  int hp;
  int mp;
  double attack;
  double defence;
  double speed;
  double intelligence;
}PA;
