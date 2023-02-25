#include<stdio.h>
int main(void)
{
    int i, j, k;
    for(k=0; k<3; k++){
            for(i=0; i<26; i++){
            for(j=0; j<2; j++) printf(" %c ",'A'+i);
    }
        printf(" \n ");
    }

    return 0;
}

