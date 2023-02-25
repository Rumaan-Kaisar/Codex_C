#include <stdio.h>
int main(void){float num; int choice;
printf("Enter the value : "); scanf("%f", &num);
printf("1 : Feet to meter, 2: Meeter to feet.   Enter the choice"); scanf("%d", &choice);
if(choice==1) printf("Meter = %f", num/3.28);
if(choice==2) printf("Feet = %f", num*3.28);
return 0;}
