#include <stdio.h>

int func(void);  /*prototype*/
int main(void)
{
    int num;
    num=func();
    printf("Number = %d", num);
    return 0;
}

int func(void)
{
    return 10;
}
