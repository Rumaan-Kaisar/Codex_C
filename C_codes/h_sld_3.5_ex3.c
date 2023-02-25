#include<stdio.h>
int main(void)
{
    int i;
    float g;
    printf("\nEnter the gallon : "); scanf("%f", &g);
    do{
        printf("\n\%f Gallon is = %f liter ",g, g*3.7854);
        printf("\nEnter the gallon or 0 to quit. "); scanf("%f", &g);
        i--;
    }  while(g); /*we can also use 'while(g!=0);'*/
    return 0;
}
