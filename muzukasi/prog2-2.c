#include<stdio.h>
int main(){
  int a[10];
  printf("配列の長さ%zu\n",sizeof(a));
  printf("配列の要素数%zu\n",sizeof(a)/sizeof(int));
}
