#!/bin/bash
#this is the command to crete a static library including all current .c files, and making them all outut as .o object files
#the library will be named liball.a.

gcc -c *.c
ar rc liball.a *.o
