#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    do{
    printf("\nEnter a character (q to quit): "); ch=getche();
    switch(ch){
    case '\r' : printf("\nEnter"); break;
    case '\t' : printf("\ntab"); break;
    case '\b' : printf("\nBackspace"); break;
    default : printf("\nCharacter"); break;
    }
    }while(ch!='q');
    return 0;
}
