#include<stdio.h>
int main(void)
{
    int i, x, total;
total=0;
do{
   printf("\nEnter the next number or press 0 to exit : "); scanf("%d", &x);
   printf("\nEnter the number again : "); scanf("%d", &i);
   if(i!=x) {printf("\nmismatch"); continue;}
   total=total+x;
} while(x);
printf("\nTotal = %d", total);
return 0;
}

