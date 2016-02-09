#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE 8+1
#define NUM_A 5
#define NUM_B 3
#define NUM_C 48

typedef struct character {
  char name[NAMESIZE];
  int HP;
  double attack;
  double defense;
}PL;

void teamA_attack_max(PL team[]);
void all_attack_max(PL teamA[],PL teamB[],PL teamC[]);
void all_average(PL teamA[],PL teamB[],PL teamC[]);
int sum(PL A[],int max);

void init_team(PL team[], int num)
{
  int i, j;
  char vowel[] = {'a', 'i', 'u', 'e' ,'o'}; //母音

  for (i=0; i<num; i++) {
    for (j=0; j<NAMESIZE-1; j++) {
      if (j%2==0) { // 子音
	team[i].name[j] = rand()%26 + 'a';
      }
      else { // 母音
	team[i].name[j] = vowel[rand()%5];
      }
    }
    team[i].name[j] = '\0';
    team[i].HP = rand()%101;
    team[i].attack = (double)rand()/RAND_MAX;
    team[i].defense = (double)rand()/RAND_MAX;
  }
}

void disp_team(PL team[], int num)
{
  int i;

  printf("Name      HP   AT     DE   \n");
  for (i=0; i<num; i++) {
    printf("%s %3d   %.2f   %.2f\n",
	   team[i].name, team[i].HP,  team[i].attack, team[i].defense);
  }
  printf("\n");
}

int main(void)
{
  PL teamA[NUM_A];
  PL teamB[NUM_B];
  PL teamC[NUM_C];
  
  srand(93057);	   // 解答結果を確認ため，乱数の種は変更してはいけない

  init_team(teamA, NUM_A);
  init_team(teamB, NUM_B);
  init_team(teamC, NUM_C);

  disp_team(teamA, NUM_A);
  /*  disp_team(teamB, NUM_B);
  disp_team(teamC, NUM_C);
  */

  teamA_attack_max(teamA);
  all_attack_max(teamA,teamB,teamC);
  all_average(teamA,teamB,teamC);

  return 0;
}


void teamA_attack_max(PL team[])
{
  int i,index = 0;;
  
  for(i = 1;i < NUM_A;i++){
    if(team[index].attack < team[i].attack){
      index = i;
    }
  }

  printf("(1)\n");
  printf("Name      HP   AT     DE   \n");
  printf("%s %3d   %.2f   %.2f\n",
	 team[index].name, team[index].HP, 
	 team[index].attack, team[index].defense);

}


void all_attack_max(PL teamA[],PL teamB[],PL teamC[])
{
  int i,indexA = 0,indexB = 0,indexC = 0,index;
  
  for(i = 1;i < NUM_A;i++){
    if(teamA[indexA].attack < teamA[i].attack){
      indexA = i;
    }
  }
  
  for(i = 1;i < NUM_B;i++){
    if(teamB[indexB].attack < teamB[i].attack){
      indexB = i;
    }
  }
  
  for(i = 1;i < NUM_C;i++){
    if(teamC[indexC].attack < teamC[i].attack){
      indexC = i;
    }
  }

 
  if(teamA[indexA].attack<teamB[indexB].attack){
    if(teamB[indexB].attack<teamC[indexC].attack){
      printf("(2)\n");
      printf("Name      HP   AT     DE   \n");
      printf("%s %3d   %.2f   %.2f\n",
	     teamC[indexC].name, teamC[indexC].HP, 
	     teamC[indexC].attack, teamC[indexC].defense);
    }else{
      printf("(2)\n");
      printf("Name      HP   AT     DE   \n");
      printf("%s %3d   %.2f   %.2f\n",
	     teamB[indexB].name, teamB[indexB].HP, 
	     teamB[indexB].attack, teamB[indexB].defense);

    }
  }else if(teamA[indexA].attack>teamC[indexC].attack){
    printf("(2)\n");
    printf("Name      HP   AT     DE   \n");
    printf("%s %3d   %.2f   %.2f\n",
	   teamA[indexA].name, teamA[indexA].HP, 
	   teamA[indexA].attack, teamA[indexA].defense);
  }else{
    printf("(2)\n");
    printf("Name      HP   AT     DE   \n");
    printf("%s %3d   %.2f   %.2f\n",
	   teamC[indexC].name, teamC[indexC].HP, 
	   teamC[indexC].attack, teamC[indexC].defense);
    
    
  }
  
}


void all_average(PL teamA[],PL teamB[],PL teamC[])
{
  int HP = 0,AT = 0, DEF = 0 ;
  double a_HP = 0,a_AT = 0,a_DEF = 0;
  
  sum(teamA,NUM_A,&HP,&AT,&DEF);
  a_HP = (double) HP / NUM_A;
  a_AT = (double)AT / NUM_A;
  a_DEF = (double)AT / NUM_A;
  printf(A_ave:HP %f AT %f DEF %f,a_HP,a_AT,a_DEF);
  
  HP = 0; AT = 0; DEF =0;

 sum(teamB,NUM_B,&HP,&AT,&DEF);
  a_HP = (double) HP / NUM_B;
  a_AT = (double)AT / NUM_B;
  a_DEF = (double)AT / NUM_B;
  printf(A_ave:HP %f AT %f DEF %f,a_HP,a_AT,a_DEF);
  HP = 0; AT = 0; DEF =0;

  sum(teamC,NUM_C,&HP,&AT,&DEF);
  a_HP = (double) HP / NUM_C;
  a_AT = (double)AT / NUM_C;
  a_DEF = (double)AT / NUM_C;
  printf(A_ave:HP %f AT %f DEF %f,a_HP,a_AT,a_DEF);

  
 
}


void sum(PL A[],int max,int *HP,int *AT,int *DEF){
  int i;
  for(i = 0;i < max;i++){
    *HP += A[i].HP;
    *AT += A[i].attack;
    *DEF += A[i].defence;
  }
    
}    

    
