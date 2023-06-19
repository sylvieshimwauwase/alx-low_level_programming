#!/bin/bash

for file in *.c; do
	gcc -c -fPIC "$file" -o "${file%.c}.o"
done

gcc -shared -o liball.so *o

rm -f *.0

