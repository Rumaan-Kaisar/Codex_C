#include<stdio.h>
#include<stdlib.h>
int main(void){FILE *f_point;
int i, k;
/*open the file for output / append*/
if((f_point=fopen("myfile_3", "ab+"))==NULL){printf("File-Error\n"); exit(1);}

i=300; 			/* value written through i*/

/*write into the file and using "!=1" instead of "==EOF" for error checking */
if((fwrite(&i, sizeof(int), 1, f_point)!=1)){printf("Write-Error\n"); exit(1);}
fclose(f_point);

/*Open the file for the input*/
if((f_point=fopen("myfile_3", "rb"))==NULL){printf("Opening-Error"); exit(1);}
/*read from file and output*/
if((fread(&k, sizeof k, 1, f_point)!=1)){printf("Read-Error\n"); exit(1);}
printf(" i is %d ", k); 	/* value read through k*/
fclose(f_point);
return 0;}
