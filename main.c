#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

FILE *fp;

char input[100];
char file[100];
char string[100];


printf("input file name : ");
scanf("%s", file);

fp = fopen(file, "r");

printf("input search string : ");
scanf("%s", string);



while((fgets(input, 100, fp)) != NULL)
{	
	if(strncmp(input, string, strlen(string)) == 0) //°°À½=0 
	{printf("find a word %s\n", input);
	}
}

printf("search done!\n");

fclose(fp);

return 0;
}
