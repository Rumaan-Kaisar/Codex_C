#include<stdio.h>
#include<conio.h>
int main(void)
{   char ch;
    do{
      printf("\nEnter a character or 'q' to quit :"); ch=getche(); printf("\n");
          switch(ch){
            case 'a' : printf(" Now is ");
            case 'b' : printf(" the time ");
            case 'c' : printf(" for all good men. ");
            case 'd' : printf(" Winter soldier"); break;
            case 'e' : printf(" the summer ");
            case 'f' : printf(" soldier ");
        }
    } while(ch!='q');
 return 0;
}
