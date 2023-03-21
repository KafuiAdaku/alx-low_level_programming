#!/bin/bash
gcc -fPIC -c *c
gcc -shared *.c -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
