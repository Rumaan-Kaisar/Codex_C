#include <stdio.h>
int main(void)
{
    int num;
    printf("Enter an integer : "); scanf("%d", &num);
    if(num < 0) printf("the number is negative");
    if(num > -1) printf("the number is non-negative");
    return 0;
}
