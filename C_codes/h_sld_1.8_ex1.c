/*Program with three functions*/
#include <stdio.h>

void func1(void);
int main(void)
{
    printf("I ");
    /*Calling the function*/
    func1();
    printf("C");
    return 0;
}

void func1(void)
{
    printf("Love ");
}
