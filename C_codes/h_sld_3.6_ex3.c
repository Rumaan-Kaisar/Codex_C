#include<stdio.h>
int main(void)
{
    int i, k, prime;
    for(i=2; i<1001; i++)
    {   prime=1;
        for(k=2; k<=(i/2); k++){
            if((i%k)==0) prime=0;
        }
        if(prime==1) printf(" %d ", i);
    }
    return 0;
}
