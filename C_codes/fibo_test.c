#include<stdio.h>
int main(void)
{
   int i,j,k,t;
   i=0;j=1;
   for (t=0; t<= 20; t++){
           printf(" %d", i);
        k=i+j;
        i=j;
        j=k;
   }

    return 0;
}
