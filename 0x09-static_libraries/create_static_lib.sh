#!/bin/bash

for code in ./*.c
do
	gcc -c ${code}
done

ar rcs liball.a *.o
