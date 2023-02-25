#include<stdio.h>
/*If we dont use <conio.h> and getche(), 'Enter the first letter'
in the 'do' loop appears twice if wrong entry is entered*/
int main(void)
{
    int a,b; char ch;
    printf("Do you want to :\n ");
    printf("Add, Substruct, Multply, or Devide?\n ");

    /*Force user to enter a valid response */
    do{
        printf("Enter the first letter : "); ch=getchar();
    } while(ch!='A' && ch!='S' && ch!='M' && ch!='D');

    printf("\nEnter the first number :\n "); scanf("%d", &a);
    printf("Enter the second number :\n "); scanf("%d", &b);

    if(ch=='A')  printf("Addition of the numbers : %d \n ", a+b);
    else if(ch=='S') printf("Subtraction of the numbers : %d \n ", a-b);
    else if(ch=='M') printf("Multiplication of the numbers : %d \n ", a*b);
    else if((ch=='D') && (b!=0)) printf("Division of the numbers : %d \n ", a/b);

    return 0;
}
