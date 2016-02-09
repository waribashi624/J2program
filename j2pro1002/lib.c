#include "lib.h"

void list_main(void)
{

  Str list[size_gene];
  Str* pt = list;
  int i = 0;
  
  pt->pre = NULL;

  while(i < size_gene){
    (pt->sentence) = gene[i];
    (pt->next)->pre = pt;
    if(i == size_gene - 1){
      (pt->next) = NULL;
    }else{
      (pt->next) = &list[i+1];
    }
    next_pt(pt,1);i++;
  }
  
  list_change(list);

  list_disp(list);

}


void list_disp(Str* pt){
 
  while(1){
    if(pt->next == NULL){
    printf("%c",pt->sentence);
    break;
    }
    printf("%c",pt->sentence);
    pt = pt->next;
  }

}


void list_change(Str* pt)
{

  int i = 0;
  int t = 0;
  int count = 0;
  char target[] = "AGCTTA";
  Str* temp;
  
  while(pt->next != NULL){
    if(target[t] == pt->sentence){
      if(t == 5){
	for(i = 0;i < 5;i++){
	  del_node(pt);
	}
	for(i = 0;i < 3;i++){
	  add_node(pt);
	  pt->sentence = 'A';
	}
	next_pt(pt,1);
	count++;
	t = 0;
      }else{
	t++;
      }
    }else{
      if(t != 0){
	pt -= t;
	t = 0;
      }else{
	t = 0;
      }
    }
    pt++;
  }

  printf("count = %d",count);


}


Str* pre_pt(Str* pt,int num)
{
  int i = 0;
  while(i < num){
  pt = pt->pre;
  i++;
  }
  return pt;
}


Str* next_pt(Str* pt,int num)
{
  int i = 0;
  while(i < num){
    pt = pt->next;
    i++;
  }
  return 0;
}

Str* del_node(Str* pt){
  Str* next_tmp = pt->next;
  Str* pre_tmp = pt->pre;
  free(pt);
  pre_tmp->next = next_tmp;
  next_tmp->pre = pre_tmp;
  return next_tmp;
}

Str* add_node(Str* pt){
  Str* add_pt = (Str*)malloc(sizeof(Str));
  Str* tmp_pt = pt->next;
  pt->next = add_pt;
  add_pt->pre = pt;
  tmp_pt->pre = add_pt;
  add_pt->next = tmp_pt;
  return add_pt;
}
