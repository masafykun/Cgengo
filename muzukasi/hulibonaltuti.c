#include <stdio.h>
int main(void){
  int n;
  int f0, f1, f2;
  int ans=0;
  f0 = 0;
  f1 = 1;

  /* フィボナッチ数の計算 */
  while(f1<4000000) {
    if(f1%2==0){
    // フィボナッチ数の出力(n>0)
    printf("%d\n", f1);
    ans=ans+f1;
    }
    // フィボナッチ数の計算
    f2 = f1 + f0;
    // 変数の代入
    f0 = f1;
    f1 = f2;
  }
  printf("ans=%d\n",ans);

  return 0;
}
