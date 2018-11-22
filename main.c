#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

FILE *fp;
FILE *fp2;

char input;
char original[100];
char copy[100];
int i=0;

printf("input original file name : ");
scanf("%s", original);
printf("input copy file name : ");
scanf("%s", copy);

fp = fopen(original, "r");
fp2 = fopen(copy, "w");

while((input=fgetc(fp)) != EOF)
{	
	fputc(input, fp2);
	i++;
}

printf("copy succed. (%i copied Bytes)\n", i);

fclose(fp);
fclose(fp2);

	return 0;
}
