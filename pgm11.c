/** This code doesn't belong to me and was given in class
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void gen(char B[], char S1[], char S2[], int elsepart);

int main()
{
	int elseflag = 0;
	char stmnt[60];
	char tok[10][20];
	int i = 0;
	char *pch;
	
	printf("Examples:\n");
	printf("if (a<b) then S1;\n");
	printf("if (a<b) then S1; else S2;\n");
	printf("\nEnter statement: ");
	gets(stmnt);
	
	pch = strtok(stmnt, " ");
	while(pch)
	{
		strcpy(tok[i++], pch);
		if(strcmp(pch, "else") == 0)
			elseflag = 1;
		pch = strtok(NULL, " ");
	}
	
	if( (strcmp(tok[2],"then")!=0) || (elseflag && (strcmp(tok[4], "else")!=0)) )
	{
		printf("Invalid statement");
		return 0;
	}
	
	if(elseflag)
		gen(tok[1], tok[3], tok[5], elseflag);
	else
		gen(tok[1], tok[3], "", elseflag);
	
	return 0;
}

void gen(char B[], char S1[], char S2[], int elsepart)
{
	int Bt = 101, Bf = 102, Sn = 103;
	
	printf("\n\tif %s goto %d", B, Bt);
	printf("\n\tgoto %d", Bf);
	printf("\n\t%d:", Bt);
	printf("%s", S1);
	
	if(!elsepart)
		printf("\n\t%d:\n", Sn);
	else
	{
		printf("\n\tgoto %d", Sn);
		printf("\n\t%d: %s", Bf, S2);
		printf("\n\t%d:\n", Sn);
	}
}


























