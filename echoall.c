#include <stdio.h>
int main(int argc, char** argv,char ** env)
{
	int i=0;
	printf("ENV\n");
	while(env[i])
	printf("%s\n",env[i++]);
	printf("ARGS\n");
	for(i=0;i<argc;i++)
	printf("%s\n",argv[i]);
	return 0;
}
