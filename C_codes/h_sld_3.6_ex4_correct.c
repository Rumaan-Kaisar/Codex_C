#include<stdio.h>
#include<conio.h>
int main(void)
{   int i;
    char ch;
    for(i=1; i<11; i++){
        printf("\nType a character : \n"); ch=getche(); printf("\n");
    for( ; ch; ch--) printf("%c", '.');
    }
    return 0;
}

