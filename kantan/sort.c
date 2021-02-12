#include<stdio.h>
int main(){
  int a[10]={182,283,592,284,37,738,486,265,694,374};
  int m,n,tmp;

  for(m=0;m<9;m++){
    for(n=0;n<9;n++){
      if(a[n]<a[n+1]){
	tmp=a[n];
	a[n]=a[n+1];
	a[n+1]=tmp;
      }
    }
  }

  for(m=0;m<10;m++){
    printf("a[%d]=a%d\n",m,a[m]);
  }
}
