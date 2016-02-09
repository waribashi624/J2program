#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>

typedef struct str{
  char sentence;
  struct str* pre;
  struct str* next;
}Str;

extern char gene[];
extern int size_gene;

void list_main(void);

void list_disp(Str* pt);

void list_change(Str* pt);

Str* pre_pt(Str* pt,int num);

Str* next_pt(Str* pt,int num);

Str* del_node(Str* pt);

Str* add_node(Str* pt);

#endif

