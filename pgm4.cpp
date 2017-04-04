#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=2 && argc!=3)
	{
		cout<<"Usage: "<<argv[0]<<" <file>[<argv]\n";
		return 0;
	}
	int fd;
	char buf[256]={'\0'};
	(void)mkfifo(argv[1],S_IFIFO|S_IRWXU|S_IRWXG|S_IRWXO);
	if(argc==2)
	{
		fd=open(argv[1],O_RDONLY);
		while(read(fd,buf,sizeof(buf))==-1 && errno==EAGAIN);
		sleep(1);
		cout<<buf;
		while(read(fd,buf,sizeof(buf))>0)
		cout<<buf<<endl;
	}
	else
	{
		fd=open(argv[1],O_WRONLY);
		write(fd,argv[2],strlen(argv[2]));
	}
	close(fd);
	return 0;
}
