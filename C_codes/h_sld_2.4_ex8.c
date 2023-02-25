/*2-D Array type Output*/
#include<stdio.h>
int main(void)
{
    int i, col, num;
    printf("Enter the terminal number :"); scanf("%d", &num);
    printf("Enter the number of columns:"); scanf("%d", &col);
    for(i=1; i<=num; i++) {printf("  %d  ", i);
    if((i%col)==0) printf("\n");}
    return 0;
}
