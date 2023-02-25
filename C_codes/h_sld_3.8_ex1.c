N#include<stdio.h>
int main(void)
{
    int x;
    for(x=0; x<100; x++){
        continue;
        printf("this never show up");
    }
    return 0;
}
