#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter a number between 1 and 4 :"); scanf("%d", &x);
    switch(x){
        case 1 : printf("One"); break;
        case 2 : printf("Two"); break;
        case 3 : printf("three"); break;
        case 4 : printf("four"); break;
        case 5 : printf("five"); /*In absence of 'break' control jumps to Next case */
        case 6 : printf("fuck !!"); break;
        default : printf("Not acceptable 5 and more");break;
    }
    return 0;
}
