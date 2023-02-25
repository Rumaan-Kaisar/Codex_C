#include<stdio.h>
#include<conio.h>
int main(void)
{ char ch;
    printf("Enter a letter : "); ch=getche();
    switch(ch){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : printf("\nis a vowel "); break;
        default : printf("\nis a consonant ");
        }
 return 0;
}
