#!/bin/bash
gcc -shared -o myprintf.so -fPIC gmm.c
export LD_PRELOAD=./myprintf.so:$LD_LIBRARRY_PATH
