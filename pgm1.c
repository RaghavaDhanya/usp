#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 199309L
#include <stdio.h>
#include <unistd.h>
int main()
{
	long res;
	if((res=sysconf(_SC_CLK_TCK))==-1)
		printf("error in sysconf\n");
	else
		printf("CLK_TCK=%d\n\",res);
	if((res=sysconf(_SC_CHILD_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("CHILD_MAX=%d\n",res);
	if((res=sysconf(_SC_OPEN_MAX))==-1)
		printf("error in sysconf\n");
	else
		printf("OPEN_MAX=%d\n",res);
	if((res=pathconf("./",_PC_PATH_MAX))==-1)
		printf("error in pathconf\n");
	else
		printf("PATH_MAX=%d\n",res);
	if((res=pathconf("./pgm1.c",_PC_NAME_MAX))==-1)
		printf("error in pathconf\n");
	else
		printf("NAME_MAX=%d\n",res);
	return 0;
}
