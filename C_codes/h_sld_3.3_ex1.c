/*This program continues the loop until 'q' is entered*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i; char ch;
    ch='a'; /*Give ch an initial value*/
    for(i=0; ch!='q'; i++){
       printf("pass : %d\n", i);
       ch=getche();
    }

    return 0;
}
