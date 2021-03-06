#include <stdio.h>
#include <stdlib.h>

void list_disp(Node* branch);

typedef struct node{
  char str;
  struct node* next;
}Node;

int main(void)
{
  Node branch1;
  Node branch2;
  Node branch3;
  Node branch4;
  Node branch5;
  
  branch1.next = &branch2;
  branch2.next = &branch3;
  branch3.next = &branch4;
  branch4.next = &branch5;
  branch5.next = NULL;

  branch1.str = "O";
  branch2.str = "P";
  branch3.str = "P";
  branch4.str = "A";
  branch5.str = "I";

  list_disp(&branch1);

  exit(EXIT_SUCCESS);
}

void list_disp(Node* branch)
{

  while(branch->next != NULL){
    printf("%c",branch->str);
    branch = branch->next;
  }

  printf("%c\n",branch->str);

}
