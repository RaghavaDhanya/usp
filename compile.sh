#! bin/sh
for i in $@
do
	cc $i;
	./a.out;
done

