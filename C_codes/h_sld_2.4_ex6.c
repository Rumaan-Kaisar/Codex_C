/*Numbers Evenly Divisible by 17*/
#include <stdio.h>
int main(void)
{
    int i;
    printf("Type-1: Multiple Type \n"); /*Multiplication Type Test*/
    for(i=1; (17*i)<=100; i++) printf(" %d ", (17*i));
    printf("\nType-2: DIVISION Type \n"); /*Division Type Test using modulus*/
    for(i=17; i<101; i++) if((i%17)==0)printf("\n %d ", i);
    return 0;

}
