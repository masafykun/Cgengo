#include<stdio.h>
#include<stdlib.h>
struct ii{
  int a,b;
  struct ii *next;
};

int main(){
  struct ii *iip,*iip0,*head;
  int len =100;
  int i;

  head=NULL;

  for(i=0;i<len;i++){
    iip0=malloc(sizeof(*head));
    if(iip0==NULL)
      return 1;
    
    (*iip0).a=i;
    (*iip0).b=len-1-i;
    (*iip0).next=NULL;

    (*iip).next=head;
    head=iip0;
  }

  for(iip=head;iip!=NULL;iip=(*iip).next)
    printf("%d\n",(*iip).b);
  return 0;
}
