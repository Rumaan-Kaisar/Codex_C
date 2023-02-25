/*Double Loop prime check differently*/
#include<stdio.h>
int main(void)
{
    int num, prm, i;
    printf("Enter a positive integer number : "); scanf("%d", &num);

printf("\nTest--1");
    prm = 1; /*Prime indicator , changes if factors are present*/
    for(i=2; i<=(num/2); i++){
        if((num%i)==0) prm = 0;
    }
    if(prm==1) printf("Number is prime");
    else printf("Number is not a prime");

printf("\nTest--2");
        for(i=2; i<=(num/2); i++){
        if((num%i)==0) {printf("\nNumber is not a prime"); return 0;/*return 0 to END Program HERE*/}
        }
         printf("\nNumber is prime");


    return 0;
}
