# include <stdio.h> 

#define NUM 1000000000
#define SEED 2000000000
#define SEED2 2340000000
 int main(void) 
 { 
   
   unsigned long  num = NUM; 
   num +=SEED; 

   printf("%lu\n",num); 


  long num2 = 0;
  num2 = num2 - SEED2;

  printf("%ld\n",num2);
  
  int i;

  unsigned long num3 = 2147483640;
  for(i = 0;i < 20;i++){
    num3 += 1;
  } 

  printf("%lu\n",num3);

  return 0;


 }
