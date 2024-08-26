#!/bin/sh

> tests.out
for i in tests/*nit; do
	echo "* $i"
	printf "\n* $i\n" >> tests.out
	bin/nitin < "$i" >> tests.out
done
diff -u tests.sav tests.out
