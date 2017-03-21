#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <unistd.h>
int main()
{
	#ifdef _POSIX_JOB_CONTROL
	printf("posix job control defined");
	#else
	printf("posix job control not defined");
	#endif
	return 0;
}
