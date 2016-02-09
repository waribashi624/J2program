#include <stdio.h>

int takarakuji(int kumi, int no);

int main(void)
{
  int kumi;
  int no;
  int money;

  printf("kumi=");
  scanf("%d", &kumi);

  printf("no=");
  scanf("%d", &no);

  money = takarakuji(kumi, no);
  printf("%d\n", money);

  return 0;
}
