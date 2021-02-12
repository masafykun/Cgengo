#include <stdio.h>
int main() {
  int n,a;
	printf("2のn乗について計算します。\n");
     a=1;
   for (n=1; n<=16; n++) {
    a = a*2;
	
    printf("n=%dのとき%d\n",n,a);
  }


}
