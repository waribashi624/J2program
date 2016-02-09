#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  double origin[10];
  double* pt_ori = origin;
  double copy[10];
  double* pt_cp = &copy[9];
  int i;

  srand((unsigned)time(NULL));

  for(i = 0;i < 10;i++){
    *pt_ori = rand()%11/(double)10;
    *pt_cp-- = *pt_ori++;
  }

  for(i = 0;i < 10;i++){
    printf("origin %3f\n,copy %3f\n",origin[i],copy[i]);
  }

  exit(EXIT_SUCCESS);
}
