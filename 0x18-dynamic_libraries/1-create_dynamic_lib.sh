#!/bin/bash
gcc -Wall -fPC -c *.c
gcc -shared *.o -o liball.so
