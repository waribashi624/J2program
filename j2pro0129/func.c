void sort(PA pl[])
{
  enum TYPE type;
  int selector;
  int i,t,max,index;

  printf("ソートの種類を次の番号で入力してください．\n");
  printf("1.HP  2.MP  3.AT\n4.DEF  5.SPE  6.INT\n");
  scanf("%d",&selector);

  switch(selector){
  case HP:
    for(i = 0;i < PLAYER;i++){
      index = i;
      for(t = 0;t < PLAYER;t++){
	if(pl[index].hp < pl[t].hp){
	  swap(&pl[i],&pl[index]);
	}
      }
    }
    break;
  }
    
  

  
}

void swap(PA *a,PA *b){
}
