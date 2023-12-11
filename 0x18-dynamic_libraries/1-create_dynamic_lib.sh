#!/bin/bash
c_files=$(find . -type f -name "*.c")
for file in $c_files; do
	gcc -c $file -fPIC -o ${file%.c}.o
done
	gcc -shared -o liball.so *.o
rm -r *.o
