#include<stdio.h>
#include<conio.h>
int main(void)
{ char ch;
int ch_count, num_count, punc_count ;
    punc_count=0 ;
    num_count=0 ;
    ch_count=0 ;
printf("Enter any string : ");
do{
ch=getche();
    switch(ch){
        case '0' :
        case '1' :
        case '2' :
        case '3' :
        case '4' :
        case '5' :
        case '6' :
        case '7' :
        case '8' :
        case '9' : num_count++; break;
        case '.' :
        case ',' :
        case '?' :
        case '!' :
        case ':' :
        case '/' :
        case ';' : punc_count++; break;
        default : ch_count++; break;
        }
}while(ch!='\r');
printf("\nCharacters : %d, Numbers : %d, Punctuations : %d", ch_count-1, num_count, punc_count);
/*"ch_count-1" because "carriage-return" or "Enter" is also a character*/
 return 0;
}
