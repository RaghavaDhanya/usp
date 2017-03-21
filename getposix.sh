#! bin/sh
printf '#define _POSIX_SOURCE\n#include <stdio.h>\n#include <limits.h>\nint main(){\n' >5.c
set `cat /usr/include/bits/posix1_lim.h /usr/include/bits/posix1_lim.h | grep -E -o "_POSIX_[_A-Z]+"`
for i in $@
do 
	printf "#ifdef $i \n printf(\"$i=%%d\\\n\",$i);\n#else\nprintf(\"$i not defined\\\n\");\n#endif\n">>5.c
	#echo $i;
done
printf 'return 0;\n}'>>5.c
cc 5.c;
./a.out
