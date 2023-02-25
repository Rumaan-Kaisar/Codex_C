/*Sum and Product from 1 to 6*/
#include<stdio.h>
int main(void)
{
    int num, sum, prod;
    sum=0;
    prod=1;
    for(num=1; num<=6; num=num+1){
       sum=sum+num;
       prod=prod*num;
    }
    printf("Sum = %d , Product = %d", sum, prod);
    return 0;

}

