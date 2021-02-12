#include<stdio.h>
int kai(int x){
  int i,n=1;
  for(i=1;i<=x;i++){
    n=n*i;
  }
  return n;
}

int main(){
  int n,r;
  double x,y;
  printf("%d",kai(5));
  printf("n=");
  scanf("%d",&n);
  printf("r=");
  scanf("%d",&r);

  x=kai(n)/kai(n-r);
  y=kai(n)/(kai(r)*kai(n-r));
  
  printf("nPr=%f\n",x);
  printf("nCr=%f\n",y);
}
