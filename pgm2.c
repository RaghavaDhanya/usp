#define _POSIX_SOURCE
#include <stdio.h>
#include <unistd.h>
int main(){
	#ifdef _POSIX_JOB_CONTROL 
	 printf("_POSIX_JOB_CONTROL is defined\n");//,_POSIX_JOB_CONTROL);
	#else
	printf("_POSIX_JOB_CONTROL not defined\n");
	#endif
	#ifdef _POSIX_SAVED_IDS 
	 printf("_POSIX_SAVED_IDS is defined\n");//,_POSIX_SAVED_IDS);
	#else
	printf("_POSIX_SAVED_IDS not defined\n");
	#endif
	#ifdef _POSIX_CHOWN_RESTRICTED 
	 printf("_POSIX_CHOWN_RESTRICTED is defined\n");//,_POSIX_CHOWN_RESTRICTED);
	#else
	printf("_POSIX_CHOWN_RESTRICTED not defined\n");
	#endif
	#ifdef _POSIX_NO_TRUNC 
	 printf("_POSIX_NO_TRUNC is defined\n");//,_POSIX_NO_TRUNC);
	#else
	printf("_POSIX_NO_TRUNC not defined\n");
	#endif
	#ifdef _POSIX_VDISABLE 
	 printf("_POSIX_VDISABLE is defined\n");//,_POSIX_VDISABLE);
	#else
	printf("_POSIX_VDISABLE not defined\n");
	#endif
	return 0;
}
