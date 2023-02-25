#include<stdio.h>
int main(void)
{
    int i, ans;
    for(i=1; i<11; i++){
      printf("\nWhat is %d + %d = ",i,i); scanf("%d", &ans);
      if(ans==(i+i)) printf("Correct");
      else {printf("False");
            printf("\nWhat is %d + %d = ",i,i); scanf("%d", &ans);
            if(ans==(i+i)) printf("Correct");
            else {  printf("False");
                    printf("\nWhat is %d + %d = ",i,i); scanf("%d", &ans);
                    if(ans==(i+i)) printf("Correct");
                    else printf("False. The correct ans is %d + %d= %d",i,i,(i+i));
                }
           }
    }
    return 0;
}
