#include<stdio.h>
#include<conio.h>
int main(void)
{
    int i, j;
    i=1;
    before:
    if(i<=10) {
            printf(" %d ",i);
            i++;
    goto before;}

    /*"H.Shildt" version*/
printf("\n");
j=1;
jump_label :
    if(j>=11) goto done_label;
    printf(" %d ",j);
            j++;
    goto jump_label;
done_label : printf("\n Done !!");
    return 0;
}
