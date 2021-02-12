#include<stdio.h>
#include<stdlib.h>
struct ii{
  int a,b;
  struct ii *next;
};
struct ii *lookup(struct ii *head,int v){
  struct ii*iip;
  for(iip=head;iip!=NULL && (*iip).a!=v;iip=(*iip).next)
    ;
  return iip;
}
  
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

    if(iip==NULL)
      head=iip0;
    else{
      (*iip0).next=head;
      head=iip0;
    }
  }

  iip=lookup(head, 63);
  if(iip!=NULL)
    printf("63 is found. b=%d\n",(*iip).b);
  else
    printf("63 is not found.\n");
  
  return 0;
}
