/*table of tip*/
#include<stdio.h>
#include<conio.h>
int main(void)
{   float i;
    char ch;
    for(i=1.0; i<101.0; i=i+1.0){
    printf("\n %f doller : 10%% : %f , 15%% : %f, 20%% : %f . ",i,i+(i*.1),i+(i*.15),i+(i*.2));
    printf("\nContinue? (y/n)");
    ch=getche();
    if(ch=='n') break ;
    }
    return 0;
}
