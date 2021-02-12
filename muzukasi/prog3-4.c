#include<stdio.h>
#include<stdlib.h>
struct ici{
  int a;
  char b;
  int c;
};

int main(){
  struct ici *icip;
  icip = malloc(sizeof(*icip));
  if(icip == NULL)
    return 1;
  ( *icip).a = 1;
  (*icip).b = 2;
  (*icip).c = 3;

  printf("%d %d %d\n",(*icip).a,(*icip).b,(*icip).c);
  free(icip)
}
