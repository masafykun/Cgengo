#include<stdio.h>
struct ymd{
  int year;
  int month;
  int day;
};
  int main(){
    struct ymd today;

    /* today.year = 2017;
    today.month = 10;
    today.day = 4;
    */
    printf("%zu",sizeof(today));

    scanf("%d",&today.year);
    scanf("%d",&today.month);
    scanf("%d",&today.day);
    
    printf("%d %d %d\n",today.year,today.month,today.day+1);
  }
