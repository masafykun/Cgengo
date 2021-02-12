#include<stdio.h>
int main(){
  int year;
  
  printf("西暦を入力\n");
  scanf("%d",&year);

  if(year%4==0){
    if(year%400==0){
      printf("閏年です。\n");
    }
    else if(year%100==0){
      printf("閏年ではない。\n");
    }
    else{
      printf("閏年です。\n");
    }
  }
}
