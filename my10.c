#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void callme(int signal)
{
	system("clear");
	char buf[256]={'\0'};
	sprintf(buf,"figlet `date +%r`");
	system(buf);
	alarm(1);
}
int main()man setitimer
{
	struct sigaction action;
	action.sa_handler=(void(*)(int))callme;
	sigaction(SIGALRM,&action,0);
	alarm(1);
	while(1);
	printf("END!!!!!!!!\n");
	return 0;
}

