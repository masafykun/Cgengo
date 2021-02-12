#include<stdio.h>
int main(){
  int a[4][4]={{20,50,30,50},{90,70,30,30},{80,50,30,10},{80,70,90,30}};
  int n,m;
  double avea,aveb,count;

  for(n=0;n<4;n++){
    avea=0;
    for(m=0;m<4;m++)
      avea=avea+a[m][n];
     printf("%d個目の教科の平均点は%fです。\n",n+1,avea/4);
  }
  
  for(n=0;n<4;n++){
    aveb=0;
    for(m=0;m<4;m++)
      aveb=aveb+a[n][m];
    printf("学籍番号%dの学生の平均点は%fです。\n",n+1,aveb/4);
  }

  for(n=0;n<4;n++){
    count=0;
    for(m=0;m<4;m++){
      if(a[n][m]>=90)
	    count=count+4;
      else if((a[n][m]<90)&&(a[n][m]>79))
        count=count+3;
      else if((a[n][m]<80)&&(a[n][m]>69))
        count=count+2;
      else if(a[n][m]<60)
	    count=count+0;
      else
	    count=count+1;
      //printf("%f\n",count);
    }
    printf("%d君のGPAは%fです。\n",n+1,count/4);
  }
}
