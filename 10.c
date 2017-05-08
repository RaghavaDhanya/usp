#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
void callme(int signal)
{
	printf("hello ");
	//if(val-->0)alarm(1);
}
int main()
{
	struct sigaction action;
	action.sa_handler=(void(*)(int))callme;
	sigaction(SIGALRM,&action,0);
	struct timeval interval={0,10000};
	struct timeval value={5,0};
	struct itimerval new1={interval,value};
	struct itimerval old;
	getitimer(ITIMER_REAL,&old);
	setitimer(ITIMER_REAL,&new1,&old);
	//alarm(1);
	while(1);
	return 0;
}

