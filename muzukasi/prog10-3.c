#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
  int val,v,score=100;
  
    srand(time(NULL));
    val=rand()%100+1;
    for (;;){ //^^smile
      printf("\ninput number\n");
      scanf("%d",&v);
      if (v > val) {
	printf("too high\n");
	score--;
      } else if (v < val) {
	printf("too low\n");
	score--;
      } else {
	printf("\nmatched\n");
	printf("number = %d\n",val);
	break;
      }
    }
    printf("score = %d\n", score);
    return (0);
}
