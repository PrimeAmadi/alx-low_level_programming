#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic -std=gnu89 -c *.c
ar rcs liball.a *.o
