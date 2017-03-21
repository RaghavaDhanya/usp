#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <unistd.h>
int main()
{
	#ifdef _POSIX_VERSION
	printf("posix version defined");
	#else
	printf("posix version not defined");
	#endif
	return 0;
}
