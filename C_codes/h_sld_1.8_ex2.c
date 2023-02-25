/*Program with three functions*/
#include <stdio.h>

void func1(void);
void func2(void);
int main(void)
{
    /*Calling the function*/
    func2();
    printf(" 3 ");
    return 0;
}

/*function calls another function*/
void func2(void)
{
    func1();
    printf(" 2 ");
}
void func1(void)
{
    printf(" 1 ");
}
