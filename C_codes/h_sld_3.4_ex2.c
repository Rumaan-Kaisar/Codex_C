#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    printf("Enter your massage :\n");
    ch=getche();
    while(ch!='\r'){
            printf("%c\n", ch+1);
        ch=getche();
    }

    return 0;
}
