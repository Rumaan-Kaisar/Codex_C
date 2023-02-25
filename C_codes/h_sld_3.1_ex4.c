#include <stdio.h>
int main(void)
{   char t, s;
printf("\nCapital Letters");
    for(t='A'; t<='Z'; t++ ){
        printf("\n ASCII code for %c is %d",t,t);
    }

printf("\n\nSmall Letters");
        for(s='a'; s<='z'; s++ ){
        printf("\n ASCII code for %c is %d",s,s);
    }
    return 0;
}
