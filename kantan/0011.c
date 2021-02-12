#include<stdio.h>
#include<stdlib.h>
int main(){
  int a,b,c,i;
  int ab,ac;
  int ba,bc;
  int ca,cb;
  //仮定
  a=10;b=2;c=10;

  ab=abs(a-b);printf("%d\n",ab);
  ac=abs(a-c);printf("%d\n",ac);
  bc=abs(b-c);printf("%d\n",bc);

  if(ab!=0&&ac!=0){
    printf("aが怪しい\n");
  }

  else if(ab!=0&&bc!=0){
    printf("bが怪しい\n");
  }

  else{
    printf("cが怪しい\n");
  }
}
