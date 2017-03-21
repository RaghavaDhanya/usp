#! bin/sh
printf '#define _POSIX_SOURCE\n#include <stdio.h>\n#include <unistd.h>\nint main(){\nlong res;\n' >6.c
set `cat /usr/include/bits/confname.h | grep -E -o "_SC_[_A-Z]+"|sort|uniq`
for i in $@
do 
	echo "#ifdef $i 
	if((res=sysconf($i))==-1)
		printf(\"error in sysconf\n\");
	else
		printf(\"\033[38;5;42m$i=%d\n\033[0;0m\",res);
	#endif">>6.c
	#echo $i;
done
printf 'return 0;\n}'>>6.c
cc 6.c;
./a.out
