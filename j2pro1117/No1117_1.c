#include <stdio.h>
#include <stdlib.h>

#define sent "National Institute of Technology, Kisarazu College"

int main(void)
{

  char str[] = sent;
  
  int Horizontal; int H;
  int Vertical; int V;
  int i;
  
  char **array;

  printf("Horizontal:");scanf("%d", &Horizontal);
  printf("Vertical:"); scanf("%d",&Vertical);

  array = (char**)malloc(sizeof(char*)*Horizontal);
  
  for(H = 0;H < Horizontal;H++){
    array[H] = (char*)malloc(sizeof(char)*Vertical);
  }
  
  i = 0;
  for(H = 0;H < Horizontal;H++){
    for(V = 0;V < Vertical;V++){
      if(str[i]!=0){
	array[H][V] = str[i];
	i++;
      }else{
	array[H][V] = ' ';
      }
    }
  }

  for(H = 0;H < Horizontal;H++){
    printf("%s\n",array[H]);
  }

  exit(EXIT_SUCCESS);
}
    
      
