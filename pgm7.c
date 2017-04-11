#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void printchar(char*);
int main(void)
{
	pid_t pid;
	if((pid=fork())<0)
	printf("fork error\n");
	else if(pid==0)
	printchar("output from child\n");
	else
	printchar("OUTPUT FROM PARENT\n");
	exit(0);
}
void printchar(char *str)
{
	char *ptr;
	int c;
	setbuf(stdout,NULL);
	for(ptr=str;(c=*ptr)!=0;++ptr)
	putc(c,stdout);
}
