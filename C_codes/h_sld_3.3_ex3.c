/*This program continues the loop until 'q' is entered (Ver-2)*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    char ch;
    for(ch=getche(); ch!='q'; ch=getche()); /*Loop without target*/
        printf("Yo !! Found the Q !!");
    return 0;
}
