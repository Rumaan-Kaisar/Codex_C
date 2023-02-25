/*This program asks the user for a value and
then counts down to zero from this number*/
#include<stdio.h>
int main(void)
{
    int i;
    printf("Enter an integer for initialization : "); scanf("%d", &i);
    for( ; i; i--) printf(" %d ", i);
    return 0;
}
