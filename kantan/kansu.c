#include<stdio.h>
int gcd(int m,int n){
  int a,b,z;

  printf("2つの整数を入力してください。\n");
  printf("1つめの整数=");
  scanf("%d",&a);
  printf("2つめの整数=");
  scanf("%d",&b);

  z=a%b;

  while(z!=0){
    a=b;b=z;
    z=a%b;
  }

  return b;
}

int main(){
  int m,n,x;
  x=gcd(m,n);
  printf("%d\n",x);
}
