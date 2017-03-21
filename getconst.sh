#! bin/sh
func()
{
	if [ -e "/usr/include/$1" ];then
	vars=`cat "/usr/include/$1" | grep -E -o "$2"|sort|uniq`
	for i in $vars
	do 
		echo $i;
		#echo "#ifdef $i 
		#if((res=sysconf($i))==-1)
		#	printf(\"error in sysconf\n\");
		#else
		#	printf(\"\033[38;5;42m$i=%d\n\033[0;0m\",res);
		#endif"
		#echo $i;
	done
	fi
	dofa $@
}
dofa()
{
	if [ -e "/usr/include/$1" ]; then
		nvars=`cat "/usr/include/$1"  | grep -E "#[ ]?include[ ]?<.*>"| grep -E -o "<.*>" |grep -E -o "[^<>]+"`
	for i in $nvars
	do 
		#echo $i
		func $i $2
	done
	fi
}
#printf '#define _POSIX_SOURCE\n#include <stdio.h>\n#include <unistd.h>\nint main(){\nlong res;\n'
func $@

#printf 'return 0;\n}'




