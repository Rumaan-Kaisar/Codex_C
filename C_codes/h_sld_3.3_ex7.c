/*Not fixed increment i=i+1 , use variable increment i=i+i*/
#include<stdio.h>
int main(void)
{
    int i;
    for(i=1 ; i<1001; i=i+i){
            printf("%d\n",i);
    }
    return 0;
}
