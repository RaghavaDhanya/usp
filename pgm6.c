#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define PS "ps -o pid,ppid,state,tty,command"
int main(void)
{
	pid_t pid;
	if((pid=fork())<0)
	printf("fork error\n");
	else if (pid==0)
	exit(0);
	sleep(4);
	//wait();
	system(PS);
	exit(0);
}

