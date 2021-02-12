#include<stdio.h>
int main(){
  int a,b,n,x,y,z;
  int hiku;

  printf("aPbを計算します。\n");
  do{
    printf("aを入力してください。\n");
    scanf("%d",&a);
    if((a>8)||(a<1)){
      printf("正しい値を入力してください。\n");
    }
  }while((a>8)||(a<1));

  do{
    printf("bを入力してください。\n");
    scanf("%d",&b);
    if((b>a)||(b<1)){
      printf("正しい値を入力してください。\n");
    }
  }while((b>a)||(b<1));

  
  hiku=a-b+1;
  x=1;
  y=1;

  for(n=hiku;n<=a;n++){
    x=x*a;
  }

  for(n=1;n<=b;n++){
    y=y*n;
  }

  z=x/y;


  printf("aPbは%dです。\n",x);
  printf("aCbは%dです。\n",z);
}
