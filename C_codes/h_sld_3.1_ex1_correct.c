#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    char ch, smallest;
    printf("Enter 10 letters : \n");
    smallest='z'; /*make largest to begin with*/
    for(i=1; i<11; i++)
    {
        ch=getche();
        if(ch<smallest) smallest=ch;
    }
    printf("\nThe smallest character is : %c", smallest);
    return 0;
}
