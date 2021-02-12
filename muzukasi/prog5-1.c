#include<stdio.h>
#include<stdlib.h>
struct ii{
  int a,b;
  struct ii *next;
};

int main(){
  struct ii *iip,*head;
  int i;

  head=malloc(sizeof(*head)*50);
  if(head==NULL)
    return 1;

  for(i=0;i<50;i++){
    (*(head+i)).a=i;
    (*(head+i)).b=49-i;
    (*(head+i)).next=head+i+1;
  }
  (*(head+49)).next=NULL;

  for(iip=head;iip!=NULL;iip=(*iip).next)
    printf("%d\n",(*iip).b);
}
