/*following program requests two integers, then displays the
outcome of each relational and logical operation when applied
to them.*/
#include<stdio.h>
int main(void)
{
    int i,j;
    printf("Enter the value of first integer i :"); scanf("%d", &i);
    printf("Enter the value of first integer j :"); scanf("%d", &j);

    /*Relational operators*/
    printf("i<j : %d\n", i<j);
    printf("i<=j : %d\n", i<=j);
    printf("i>j : %d\n", i>j);
    printf("i>=j : %d\n", i>=j);
    printf("i==j : %d\n", i==j);
    printf("i!=j : %d\n", i!=j);

     /*Logical operators*/
    printf("i&&j : %d\n", i&&j);
    printf("i||j : %d\n", i||j);
    printf("!i : %d , !j : %d\n", !i, !j);

    return 0;
}
