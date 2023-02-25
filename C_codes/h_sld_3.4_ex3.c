#include<stdio.h>
int main(void)
{
    int i;
    float s, v;
    printf("Enter the number of driving time computation : "); scanf("%d", &i);
    while(i){
        printf("\nEnter the average speed : "); scanf("%f", &v);
        printf("\nEnter the distance : "); scanf("%f", &s);
        printf("\nThe driving time : %f", s/v);
    i=i-1;
    }
    return 0;
}
