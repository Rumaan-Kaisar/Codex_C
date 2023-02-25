#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter an Integer : "); scanf("%d", &num);
    if((num%2)==1) printf(" Odd Number ");
    if((num%2)==0) printf(" Even Number ");
    return 0;
}
