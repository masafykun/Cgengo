#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
main(void)
{
    int i;
    srand(1);
    for (i = 0; i < 10; i++)
        printf("%d\n", rand()%100+1);
    return (0);
}
