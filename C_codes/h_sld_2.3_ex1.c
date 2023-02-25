#include<stdio.h>
int main(void)
{
    int choice;
    float num;
    printf("1:Feet to meters, 2:M<eter to feets \n Enter the Choice : ");
    scanf("%d", &choice);
    if(choice==1||choice==2){
            if(choice==1) {printf("Enter the Feet value : "); scanf("%f", &num);
                            printf("%f Feets = %f Meters", num, (num/3.28));}
            else {printf("Enter the Meter value : "); scanf("%f", &num);
                            printf("%f Meterss = %f Feets", num, num*3.28);}
    }
    else printf("Choosen numbers must be 1 or 2");
    return 0;
}
