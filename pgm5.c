#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void)
{
	pid_t pid;
	if((pid=fork())<0)
	printf("Error\n");
	else if(pid == 0)
	{
		if((pid=fork())<0)
		printf("fork error\n");
		else if(pid>0)
		exit(0);
		sleep(2);
		printf("Second child, parent=%d\n",getppid());
		exit(0);
	}
	if(waitpid(pid,NULL,0)!=pid)
	printf("waitpid error\n");
	exit(0);
}
