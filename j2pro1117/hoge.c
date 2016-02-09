#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{ 
  char* name;
  struct Node* pre;
  struct Node* next;
}Node;


Node* add_node(Node* now);

void Node* 

Node* add_node(Node* now){
  now->next = (Node*)malloc(sizeof(Node));
  now->next->pre = now;
  return now->next;
}

int main(void){
  Node node;
  Node* node2 = add_node(&node);
  node.a = 8;
  node2->a = 1;
  printf("%d",node.next->a);
  printf("%d",node2->pre->a);
  exit(EXIT_SUCCESS);
}
  

