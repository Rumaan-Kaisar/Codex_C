#include<stdio.h>
#include<conio.h>
int main(void)
{   int a,b; char ch;
    printf("You want to : Add, Subtract, Multiply, Devide ?");
    /*Force user to valid input*/
    do{
      printf("\nEnter the first letter :"); ch=getche();
    } while((ch!='A')&&(ch!='S')&&(ch!='M')&&(ch!='D'));

    printf("\nEnter the first number : "); scanf("%d", &a);
    printf("\nEnter the second number : "); scanf("%d", &b);

    switch(ch){
        case 'A' : printf(" Sum of the given numbers : %d", a+b); break;
        case 'S' : printf(" Minus of the given numbers : %d", a-b); break;
        case 'M' : printf(" Multiple of the given numbers : %d", a*b); break;
        case 'D' : if(b) printf(" Division of the given numbers : %d", a/b); break;
    }
    return 0;
}
