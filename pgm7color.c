#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void printchar(char*,int);
int main(void)
{
	pid_t pid;
	if((pid=fork())<0)
	printf("fork error\n");
	else if(pid==0)
	printchar("output from child\n",222);
	else
	printchar("OUTPUT FROM PARENT\n",32);
	exit(0);
}
void printchar(char *str,int color)
{
	char *ptr;
	int c;
	setbuf(stdout,NULL);
	for(ptr=str;(c=*ptr)!=0;++ptr)
	printf("\033[38;5;%dm%c\033[0;0;m",color,c);
}
