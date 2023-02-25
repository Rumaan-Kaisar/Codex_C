/*Mis-understood exercise 1 of 3.1*/
#include <stdio.h>
#include<conio.h>
int main(void)
{
int i;
char c0, c1, c2, c3, c4, c5, c6, c7, c8, c9 ;
printf("Enter the letters : ");
for(i=0; i<11; i++){
    if(i==0) c0=getche();
    if(i==1) c1=getche();
    if(i==2) c2=getche();
    if(i==3) c3=getche();
    if(i==4) c4=getche();
    if(i==5) c5=getche();
    if(i==6) c6=getche();
    if(i==7) c7=getche();
    if(i==8) c8=getche();
    if(i==9) c9=getche();
}

printf("\n The erliest entered letter is : %c", c0);
return 0;
}
