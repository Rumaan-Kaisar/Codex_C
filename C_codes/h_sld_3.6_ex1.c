#include<stdio.h>
int main(void)
{
    int i, ans, crct, right;
    for(i=1; i<11; i++){
      printf("\nWhat is %d + %d = ",i,i); scanf("%d", &ans);
      if(ans==(i+i)) printf("Correct");
      else {printf("False");
            printf("\nTry again");
            right=0;
            for(crct=1; (crct<3)&&(!right); crct++ ){
                printf("\nWhat is %d + %d = ",i,i); scanf("%d", &ans);
                if(ans==(i+i)){ printf("Correct"); right=1;}
                else {printf("False"); printf("\nTry again");}
                    }
            if(right==0) printf("\nFalse. The correct ans is %d + %d= %d",i,i,(i+i));
           }

    }
    return 0;
}
