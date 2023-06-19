#!/bin/bash
gcc -Wall -Wextra -pendantic -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
