#include<stdio.h>
int main(){
	int a[11];
	int n,m,x,b=0,c=0;
	for(n=1;n<11;n++){
		printf("%d個目の数値を入力\n",n);
		scanf("%d",&a[n]);
		b=b+a[n];
	}
	
	m=b/10;
	
	printf("全部で%dです。\n",b);
	printf("平均は%dです。\n",m);
	
	for(n=1;n<11;n++){
		c=c+(a[n]-m)*(a[n]-m);
	}
	x=c/m;
	printf("分散は%dです。\n",x);
	
	return 0;
}
