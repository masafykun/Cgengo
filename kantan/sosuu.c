#include<stdio.h>
int main(){
  int a,b,i,x,z;

  printf("N以下の素数を列挙します。\n");
  printf("数字を入力してください。\n");
  scanf("%d",&a);

  for(z=2;z<=a;z++){
    x=0;

    for(i=1;i<z;i++){
      if(z%i==0){
	x++;
      }
    }

    if(x>1){
      printf("%dは素数ではありません。\n",z);
    }
    else{
      printf("%dは素数です。\n",z);
    }
  }
}
