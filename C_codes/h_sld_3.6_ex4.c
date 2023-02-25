#include<stdio.h>
#include<conio.h>
int main(void)
{   int i;
    char ch;
    printf("Type a character : \n"); ch=getche();
    for(i=1; i<ch; i++) printf(" %c ", '.');
    return 0;
}
