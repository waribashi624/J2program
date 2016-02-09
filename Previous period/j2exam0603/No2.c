#include <stdio.h>

int sumAtoB(int a,int b);


int main(void)
{

  int a,b;

 re:
  printf("Please put number of A and B. (but A < B )\n");
  scanf("%d%d",&a,&b);
  
  if(a >= b){
    goto re;
  }

  int sum = sumAtoB(a,b);

  printf("sum = %d\n",sum);

  return 0;

}

int sumAtoB(int a,int b)
{

  int sum = 0;
  int tmp;
  tmp = b - a + 1;

  int ab[tmp];

  int i;
  for(i = 0;i < tmp;i++){
    ab[i] = a;
    if(ab[i] % 2 == 0){
      sum += ab[i];
    }
    a = a + 1;
  }

  return sum;

}

  
