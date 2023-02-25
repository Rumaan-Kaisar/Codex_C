#include<stdio.h>
int main(void)
{
    int num;
    for(num=11; num<11; num=num+1) printf(" %d ", num);
    /*tst==100;*/
    printf("\n Terminating");
    return 0;
}
/*INFINITE LOOP : for(num=11; num<=11||num>11; num=num+1) printf(" %d ", num);
  INFINITE LOOP : for(num=1; num>0; num=num+1) printf(" %d ", num); */
