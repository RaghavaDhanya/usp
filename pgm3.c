#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
int main(int argc , char** argv)
{
	struct flock filelock;
	int fd;
	char buf[51]={'\0'};
	fd=open(argv[1],O_RDWR);
	if(fd==-1)
	{
		printf("Error\n");
		return 1;
	}
	lseek(fd,-100,SEEK_END);
	filelock.l_whence=SEEK_CUR;
	filelock.l_start=0;
	filelock.l_len=100;
	if(fcntl(fd,F_GETLK,&filelock)==0)
	{
		printf("File locked\n");
		printf("pid=%d\n",filelock.l_pid);
	}
	else
		printf("Not locked\n");
	filelock.l_type=F_WRLCK;
	filelock.l_whence=SEEK_CUR;
	filelock.l_start=0;
	filelock.l_len=100;
	if(fcntl(fd,F_SETLK,&filelock)==-1)
	{
		printf("Error in locking file\n");
		return 1;
	}
	else
	{
		printf("File is locked\n");
		lseek(fd,-50,SEEK_END);
		printf("contents of locked file=\n");
		if(read(fd,buf,sizeof(buf)))
			printf("%s",buf);
					
	}
	filelock.l_type=F_UNLCK;
	filelock.l_whence=SEEK_SET;
	filelock.l_start=0;
	filelock.l_len=0;
	if(fcntl(fd,F_SETLK,&filelock)==-1)
	{
		printf("ERROR\n");
		return 1;
	}
	else
		printf("File unlocked\n");
	return 0;
}
