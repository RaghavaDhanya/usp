#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
char* env[]={"USER=unknown","PATH=/tmp",NULL};
int main(void)
{
	pid_t pid;
	if((pid=fork())<0)
	printf("fork error");
	else if(pid==0)
	{
		if(execle("./echoall.out","echoall","arg1","arg2",(char*)0,env)<0)
		printf("execle error\n");
		exit(0);
	}
	if(waitpid(pid,NULL,0)<0)
	printf("wait error\n");
	if((pid=fork())<0)
	printf("fork error\n");
	else if(pid==0)
	{
		if(execlp("echoall.out","echoall","arg1",(char*)0)<0)
		printf("execlp error\n");
		exit(0);
	}
	return 0;
}
