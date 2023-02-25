/* this will print i++ and i-- */
#include<stdio.h>
int main(void){ int i; i=0;
                i++ ;
                printf("i++ = %d  ",i); /*prints 1(=0+1)*/
                i-- ;
                printf("i-- = %d  ",i);
                /*prints 0(=1-1) , new value was i=1 after i++ */
                return 0;}

/*  * int i; i=0; printf("i++ = %d  and  i-- = %d ", i++,i--);
    * int i; i=0; printf(" %d  %d  %d  %d", i++, i++, i++, i++);
    * int i; i=0; printf(" %d  %d  %d  %d", ++i, ++i, ++i, ++i);
    * int i; i=0; printf(" %d  %d  %d  %d", i--, i--, i--, i--);
    * int i; i=0; printf(" %d  %d  %d  %d", --i, --i, --i, --i);
    Gives different value*/
