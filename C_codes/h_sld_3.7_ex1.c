#include<stdio.h>
#include<conio.h>
int main(void)
{   int i;
    char ch;
    /*display all multiples of 6*/
    for(i=1; i<10001; i++){
        if(!(i%6)){
        printf("\n %d . You want more? y/n", i); ch=getche();
        if(ch=='n') break ; /* stops the loop */
        }
    }
    return 0;
}

