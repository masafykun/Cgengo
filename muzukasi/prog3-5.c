#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct zip{
  int code;
  char pref[200];
  char addr[200];
};

int main(){
  struct zip *zp;
  int i;
  
  zp = malloc(sizeof(*zp)*50);
  if(zp == NULL)
    return 1;
  i=0;
  do{
    scanf("%d %100s %100[^\n]%c",&(*zp).code,&(*zp).pref[0],&(*zp).addr[0]);
    printf("%d\n",(*zp).code);
    i++;
  }while(i<50);
}



