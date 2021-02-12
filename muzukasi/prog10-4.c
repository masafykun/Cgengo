#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
  int a,b,c,d;
  int h,i,j,k;
  int n,hit,blow;
  int score=100,times=1;
  
    srand(time(NULL));
    
    a=rand()%10;
    for(b=rand()%10;a==b;b=rand()%10);
    for(c=rand()%10;a==c||b==c;c=rand()%10);
    for(d=rand()%10;a==d||b==d||c==d;d=rand()%10);
    // printf("a=%d;b=%d;c=%d;d=%d\n",a,b,c,d);
    
    for (;;){ //^^smile
      hit=0;blow=0;
      printf("\ninput number\n");
      scanf("%d",&n);
      h=n/1000;
      i=(n-h*1000)/100;
      j=(n-h*1000-i*100)/10;
      k=(n-h*1000-i*100-j*10);
      printf("h=%d;i=%d;j=%d;k=%d\n",h,i,j,k);
      
      if(h==a){hit++;}
      else if(h==b||h==c||h==d){blow++;};

      if(i==b){hit++;}
      else if(i==a||i==c||i==d){blow++;};

      if(j==c){hit++;}
      else if(j==a||j==b||j==d){blow++;};
      
      if(k==d){hit++;}
      else if(k==a||k==b||k==c){blow++;};
      
      if(hit==4){
	printf("Congratulations!\n");
	printf("score:%d\n",score-times);
	return 0;
      }else
	printf("hit:%d,blow:%d,times:%d\n",hit,blow,times);
      times++;
    }
}
