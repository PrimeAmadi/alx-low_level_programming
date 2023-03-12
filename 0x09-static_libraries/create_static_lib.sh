#!/bin/bash

for code in ./*.c
do
	gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 ${code}
done

ar rcs liball.a *.o
