#!/bin/bash
c_files=(*.c)
for file in "${c_files[@]}";do
	gcc -c "$file"
done

ar rcs liball.a *.o

rm *.o
