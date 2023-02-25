/*following program requests 1 or 0, then displays the
outcome of AND, OR, XOR operation when applied
to them.*/
#include<stdio.h>

int xor(int a, int b);

int main(void)
{
    int p,q;
    printf("Enter the number of p (0 or 1) : "); scanf("%d", &p);
    printf("Enter the number of q (0 or 1) : "); scanf("%d", &q);

    printf("p AND q : %d\n", p&&q);
    printf("p OR q : %d\n", p||q);
    printf("p XOR q : %d\n", xor(p,q));

    printf("\n\nWihout brackets and direct (a||b)&&!(a&&b)Test\n");
    printf("p XOR q : %d\n", (p||q)&&!(p&&q));

    return 0;
}

int xor(int a, int b){return (a||b)&&(!(a&&b));}
