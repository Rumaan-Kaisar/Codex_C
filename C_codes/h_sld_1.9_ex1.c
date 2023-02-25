#include<stdio.h>
/*Function prototype with arguments & parameters*/
void sum(int x, int y);
int main(void)
{
    sum(1,2);
    sum(9,6);
    sum(81,9);

    return 0;
}

void sum(int x, int y)
{
    printf(" sum = %d ", x+y);
}
