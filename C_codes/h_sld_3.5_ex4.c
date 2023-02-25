#include<stdio.h>
int main(void)
{
    int g;
        printf("1. Enter addresses \n2. Delete addresses \n");
        printf("3. Search the list \n3. Print the list \n");
        printf("5. Quit. \n");
    do{
        printf("\nEnter the number of choice (1-5)");
        scanf("%d", &g);
    }  while((g>5)||(g<1));
    return 0;
}
