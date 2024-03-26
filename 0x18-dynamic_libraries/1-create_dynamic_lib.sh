#!/bin/bash

# Compile each .c file into object files
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o
