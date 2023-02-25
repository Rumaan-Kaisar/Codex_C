#include <stdio.h>
#include<conio.h>
int main(void)
{
int a, b;
char ch;
printf("Do you want to:\n");
printf("Add, Subtract, Multiply, or Divide?\n");
/* force user to enter a valid response*/
do {
printf ( "\nEnter first letter: ");
ch = getche();
} while(ch!='A' && ch!='S' && ch!='M' && ch!='D');

 printf("\nEnter the first number :\n "); scanf("%d", &a);
    printf("Enter the second number :\n "); scanf("%d", &b);
if(ch=='A') printf("%d", a+b);
else if(ch=='S') printf("%d", a-b);
else if(ch=='M') printf("%d", a*b);
else if(ch=='D' && b!=0) printf("%d", a/b);
return 0;
}
