#include<stdio.h>
struct ici{
  int a;
  char b;
  int c;
};

int main(){
  struct ici x;
  struct ici *icip;

  icip = &x;
  (*icip).a=10;

  printf("x.a = %d\n", x.a);
  printf("(*icip).a = %d\n",(*icip).a);
}
