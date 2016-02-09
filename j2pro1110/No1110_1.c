#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  int i;
  int n;
  int sum = 0;
  printf("人数:");
  scanf("%d",&n);

  int *point =(int*)malloc(n*sizeof(int));

  for(i = 0;i < n;i++){
    printf("%d人目:",i+1);
    scanf("%d",point+i);
    if(*(point+i)> 5){
      *(point+i)=0;
      i--;continue;
    }
    sum+=*(point+i);
  }

  printf("sum = %d",sum);
  

  exit(EXIT_SUCCESS);
}
  
