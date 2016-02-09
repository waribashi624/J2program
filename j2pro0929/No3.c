#include <stdio.h>
#include <stdlib.h>

#define string "dragon and dragon and dragon."
#define target "dragon"

int main(void)
{
  
  char str[] = string;
  char* pt_str = str;
  char* pt_pt_str = pt_str;
  char tar[] = target;
  char* pt_tar = tar;
  char* pt_pt_tar = pt_tar;
  int i;
  int t;
  int temp = 0; 
  int count = 0;

  i = sizeof(str);
  t = sizeof(tar);

  while(pt_str != (pt_pt_str+i)){
    while(*pt_tar == *pt_str){

      if(pt_tar == pt_pt_tar+t){
	count++;
      }break;    

      pt_str++;pt_tar++;
    }

    pt_tar = pt_pt_tar;
    pt_str++;

  }

  printf("%d\n",count);
  
  exit(EXIT_SUCCESS);
  
}

  
