#include<stdio.h>
int main(void)
{   int ans, i;
    for(i=1; i<11; i++){
        printf("\nWhat is %d + %d = ", i, i);
        scanf("%d", &ans);
        if(ans==(i+i)) printf("\nCorrect");
        else printf("Wrong answer. Answer is %d", (i+i));

    }
     return 0;
}
