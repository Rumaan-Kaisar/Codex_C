#include<stdio.h>
int main(void)
{
    int i;
    float s, v;
    printf("Enter the number of driving time computation : "); scanf("%d", &i);
    for( ; i; i--){
        printf("\nEnter the average speed : "); scanf("%f", &v);
        printf("\nEnter the distance : "); scanf("%f", &s);
        printf("\nThe driving time : %f", s/v);
    }
    return 0;
}
