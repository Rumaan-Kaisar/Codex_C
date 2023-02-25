#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i, a, b;
    for(i=0; i<10; i++){ /*Use increment operator*/
        printf("\nEnter first number : "); scanf("%d", &a);
        printf("\n Enter second number : "); scanf("%d", &b);
    /* float type : if(b) printf("\n Division  : %f", (1.0*a)/(1.0*b));*/
    if(b) printf("\n Division  : %d", a/b); /*simplify condition*/
    else printf("\n Can not divide  when b=0."); /*using else*/
    }
return 0;
}
