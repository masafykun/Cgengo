#include<stdio.h>
int main(){
  int a,n;
  printf("An=2A(n-1)+1の漸化式を計算します。\n");
  printf("数値を入力\n");
  printf("ただし、入力する数値は0以上であること。\n");
  scanf("%d",&n);

  if(n==0){
    printf("値は0です。\n");
  }

  else{
    a=1;
    for(int loop=1;loop<=n;loop++){
      a=a*2;
    }
    printf("値は%dです\n",a);
  }

  return 0;
}


