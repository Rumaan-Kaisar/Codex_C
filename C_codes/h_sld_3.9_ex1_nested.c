#include<stdio.h>
int main(void)
{
    int x, y;
    printf("Enter a number between 1 and 4 :"); scanf("%d", &x);
    switch(x){
        case 1 : printf("One"); break;
        case 2 : printf("Two"); break;
        case 3 : printf("Enter a char between 13 and 14 :"); scanf("%d", &y);
                  switch(y){ case 13 : printf("trtrn"); break;
                            case 14 : printf("frtrn"); break;
                  } break;
        case 4 : printf("four"); break;
        case 5 : printf("\nfive"); /*In absence of 'break' control jumps to Next case */
        case 6 : printf("\nfuck !!"); break;
        default : printf("Not acceptable 5 and more");break;
    }
    return 0;
}
