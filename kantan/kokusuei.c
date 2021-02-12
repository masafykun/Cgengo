#include<stdio.h>
int main(){
	
	int a[11],b[11],c[11];
	int n;
	int eigo,suugaku,kokugo;
	int eigoh,suugakuh,kokugoh;
	int eigob,suugakub,kokugob;
	int x,y,z;
	int maxe,mine,maxs,mins,maxk,mink;
	maxe=0;mine=100;
	maxs=0;mins=100;
	maxk=0;mink=100;
	
	eigo=0;
	printf("英語の点数を入力\n");
	for(n=1;n<11;n++){
		printf("%d人目の点数を入力\n",n);
		scanf("%d",&a[n]);
		eigo=eigo+a[n];
	}
	
	for(n=1;n<11;n++){
		if(maxe<a[n]){
			maxe=a[n];
		}
		if(mine>a[n]){
			mine=a[n];
		}
	}
	
	suugaku=0;
	printf("数学の点数を入力\n");
	for(n=1;n<11;n++){
		printf("%d人目の点数を入力\n",n);
		scanf("%d",&b[n]);
		suugaku=suugaku+b[n];
	}
	
	for(n=1;n<11;n++){
		if(maxs<b[n]){
			maxs=b[n];
		}
		if(mins>b[n]){
			mins=b[n];
		}
	}
	
	kokugo=0;
	printf("国語の点数を入力\n");
	for(n=1;n<11;n++){
		printf("%d人目の点数を入力\n",n);
		scanf("%d",&c[n]);
		kokugo=kokugo+c[n];
	}
	
	for(n=1;n<11;n++){
		if(maxk<c[n]){
			maxk=c[n];
		}
		if(mink>c[n]){
			mink=c[n];
		}
	}
	
	
	eigoh=eigo/10;
	suugakuh=suugaku/10;
	kokugoh=kokugo/10;
	
	printf("\n\n\n");
	printf("英語の平均は%dです。\n",eigoh);
	printf("数学の平均は%dです。\n",suugakuh);
	printf("国語の平均は%dです。\n",kokugoh);
	printf("\n\n");
	printf("英語の最高得点は%dです。\n",maxe);
	printf("英語の最低得点は%dです。\n",mine);
	printf("数学の最高得点は%dです。\n",maxs);
	printf("数学の最低得点は%dです。\n",mins);
	printf("国語の最高得点は%dです。\n",maxk);
	printf("国語の最低得点は%dです。\n",mink);
	printf("\n\n\n");
	
	eigob=0;
	for(n=1;n<11;n++){
		eigob=eigob+(a[n]-eigoh)*(a[n]-eigoh);
	}
	
	suugakub=0;
	for(n=1;n<11;n++){
		suugakub=suugakub+(b[n]-suugakuh)*(b[n]-suugakuh);
	}
	
	kokugob=0;
	for(n=1;n<11;n++){
		kokugob=kokugob+(c[n]-kokugoh)*(c[n]-kokugoh);
	}
	
	
	x=eigob/eigoh;
	printf("英語の分散は%dです。\n",x);
	y=suugakub/suugakuh;
	printf("数学の分散は%dです。\n",y);
	z=kokugob/kokugoh;
	printf("国語の分散は%dです。\n",z);
	
	
	return 0;
}
