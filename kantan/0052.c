#include<stdio.h>
int main(){
  int x[3],i;
  int tmp;

  printf("大きい順に入力\n");
  for(i=0;i<3;i++){
    printf("%d個目の数値を入力\n",i+1);
    scanf("%d",&x[i]);
  }

  for(int i=0;i<2;i++){
    for(int j=2;j>i;j--){
      if(x[j-1]<x[j]){
	tmp=x[j-1];
	x[j-1]=x[j];
	x[j]=tmp;
      }
    }
  }

  printf("---------\n");
  printf("%d\n",x[0]);
  printf("%d\n",x[1]);
  printf("%d\n",x[2]);
  


  if(x[0]==x[2]){
    printf("正三角形です。\n");
  }

  else if(x[0]==x[1]||x[1]==x[2]){
    printf("二等辺三角形\n");
  }

  else if(x[0]*x[0]==x[1]*x[1]+x[2]*x[2]){
    printf("直角三角形\n");
  }

  else{
    printf("その他\n");
  }

}
