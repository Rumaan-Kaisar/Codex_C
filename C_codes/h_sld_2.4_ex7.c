/*Print the factors of a given Numbers*/
#include<stdio.h>
int main(void)
{
    int num, i;
    printf("Enter a positive integer number : "); scanf("%d", &num);
    printf("\nFactors of the given number : ");
    for(i=2; i<=(num/2); i++) if((num%i)==0) printf(" %d ", i);
    return 0;
}
