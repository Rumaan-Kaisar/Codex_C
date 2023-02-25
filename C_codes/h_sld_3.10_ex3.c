#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Enter a Letter : "); ch=getche();
    if((ch>='A')&&(ch<='Z')) printf("\n '%c' is a capital letter", ch);
    else if((ch>='a')&&(ch<='z')) printf("\n '%c' is converted capital letter", ch-32);
    else printf("\n input is not a letter");
    return 0;
}
