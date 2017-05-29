#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>
int system1(const char* cmdstring)
{
	pid_t pid;
	int status;
	if(cmdstring==NULL)
	return 1;
	if((pid=fork())<0)
	status=-1;
	else if(pid==0)
	{
		execl("/bin/sh","sh","-c",cmdstring,(char*)0);
		_exit(127);
	}
	else
	{
		while(waitpid(pid,&status,0)<0)
		{
			if(errno!=EINTR)
			{
				status=-1;
				break;
			}
		}
	}
}
int main(int argc, char** argv)
{
	char str[300]={'\0'};
	int i=1;
	while(argv[i])
	{
		strcat(str,argv[i++]);
		strcat(str," ");
	}
	system1(str);
	return 0;
}
	
