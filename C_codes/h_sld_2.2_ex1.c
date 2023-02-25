#include<stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter the first number : "); scanf("%d", &num1);
    printf("Enter the second number : "); scanf("%d", &num2);
    if(num2==0) printf("cannot divbide by zero. ");
    else printf("Answer is : %d", (num1/num2));
    return 0;
}
