#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i;
    i=0;
    again:  printf(" %d ",i);
            i++;
    if(i<10) {goto again;}
    return 0;
}
