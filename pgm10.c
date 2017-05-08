#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void callme(int signal)
{
	printf("Signal\n");
}
int main()
{
	struct sigaction action;
	action.sa_handler=(void(*)(int))callme;
	sigaction(SIGALRM,&action,0);
	alarm(1);
	pause();
	return 0;
}

