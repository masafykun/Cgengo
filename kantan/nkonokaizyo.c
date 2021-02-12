#include<stdio.h>
int main(){
	int n,x;
	double a;
		printf("数値を入力\n");
		scanf("%d", &x);
		printf("計算結果\n");

	if(x>16){
	printf("16以上が入力されました。\n数値を入力しなおしてください。\n");
	return main();
	}

	if(x<0){
	printf("0以下が入力されました。\n入力しなおしてください。\n");
	return main();
	}


	a=1;
	for(n=1;n<=x;n++){
	a=a*n;
	printf("%f\n",a);
	}

	printf("%dの階乗は%fです。\n",x,a);
}
