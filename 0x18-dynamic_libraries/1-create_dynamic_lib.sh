#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic *.c
gcc -shared -o liball.so *.o
rm -f *.o
