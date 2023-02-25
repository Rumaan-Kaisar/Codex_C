#include <stdio.h>
int main(void)
{
int a, b, r, h;
char ch;
printf("Do you want to find the area of:\n");
printf("Circle, Rectangle, Triangle?\n");

printf ( "\nEnter first letter: ");
ch = getchar();
if(ch=='R') {printf("\nEnter the Width of the rectangle :\n "); scanf("%d", &a);
            printf("Enter the Length of the rectangle  :\n "); scanf("%d", &b);
            printf("\nThe area of the Ractangle = %f", 1.0*a*b);}/*'int' type data to 'float' transform*/
else if(ch=='C') {  printf("\nEnter the radious of the circle :\n "); scanf("%d", &r);
                    printf("The area of the Cirle = %f", 3.14159*r*r);}
else if(ch=='T') {printf("\nEnter the base of the triangle :\n "); scanf("%d", &b);
                printf("Enter the height of the triangle  :\n "); scanf("%d", &h);
                printf("The area of the triangle = %f", 0.5*b*h);}
return 0;
}
