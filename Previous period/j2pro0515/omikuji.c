#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void omikuji(int number)
{
  if (number == 1) {
    printf("��ȤǤ�!��������!\n");
  }
  else if (number == 2) {
    printf("�ȤǤ�����ä�����\n");
  }
  else if (number == 3) {
    printf("���ȤǤ����ޤ������̤���\n");
  }
  else {
    printf("1, 2, 3�ʳ��ο��ͤ����Ϥ���ޤ�����\n");
    printf("1, 2, 3�Τɤ줫�����Ϥ��Ƥ͡�\n");
  }
}

int main(void)
{
  int num;
  srand((unsigned)time(NULL));
  omikuji(rand()%3+1);

  return 0;
}

