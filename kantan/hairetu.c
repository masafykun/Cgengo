#include<stdio.h>
int main(){
  int a[3][4],b[4]={3000,1500,4000,2000};
  int m,n,x;
  //a[3][4]={{2,5,3,5},
  //         {9,7,3,3},
  //         {8,5,3,1}}

  for(n=0;n<3;n++)
    for(m=0;m<4;m++){
      printf("%d年の通信機器%dの個数を入力",2014+n,m+1);
      scanf("%d",&a[n][m]);
    }

  for(n=0;n<3;n++){
    x=0;
    for(m=0;m<4;m++)
      x=x+a[n][m]*b[m];
    printf("%d年の売上は%dです。\n",2014+n,x);
  }
}
