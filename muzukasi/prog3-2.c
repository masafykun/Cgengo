#include<stdio.h>
struct ici{
  int a;
  char b;
  int c;
};

int main(){
  struct ici z[100];
  int i;

  for(i=0;i<=100;i++){
    z[i].a = i;
    z[100-i].c = i;
  }

  for(i=0;i<=100;i++)
    printf("a[%d]=%d c[%d]=%d\n",i,z[i].a,i,z[i].c);

  // printf("100 = %d\n",sizeof(z)/sizeof(struct ici));
}
