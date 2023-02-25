#include<stdio.h>
int main(void)
{
    int i, num;
    printf("Enter the number :"); scanf("%d", &num);
    for(i=num; i>0; i--) printf(" %d \n", i);
    printf("\a");
    return 0;
}
