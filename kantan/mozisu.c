#include<stdio.h>
#include<string.h>
int main(){
  char s[256];
  int i;
  
  scanf("%256s",s);
  i=strlen(s);
  // for(i=0;s[i] =! '\0';i++)
    
  printf("%d %s\n",i,s);

  return 0;
}
